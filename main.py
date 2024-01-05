import os
import rsa
import base64
import hashlib
import tkinter as tk
from tkinter import messagebox
from tkinter import ttk

# Main application window
root = tk.Tk()
root.title("Secure Registration and Login System")

# Notebook for tabs
tab_control = ttk.Notebook(root)

# Registration tab
reg_tab = ttk.Frame(tab_control)
tab_control.add(reg_tab, text='Register')

# Login tab
login_tab = ttk.Frame(tab_control)
tab_control.add(login_tab, text='Login')

tab_control.pack(expand=1, fill="both")

# Registration widgets
reg_username_label = tk.Label(reg_tab, text="Username")
reg_username_label.pack()

reg_username_entry = tk.Entry(reg_tab)
reg_username_entry.pack()

reg_password_label = tk.Label(reg_tab, text="Password")
reg_password_label.pack()
reg_password_entry = tk.Entry(reg_tab, show="*")
reg_password_entry.pack()

reg_submit_button = tk.Button(reg_tab, text="Register")
reg_submit_button.pack()

# Login widgets
login_username_label = tk.Label(login_tab, text="Username")
login_username_label.pack()
login_username_entry = tk.Entry(login_tab)
login_username_entry.pack()

login_password_label = tk.Label(login_tab, text="Password")
login_password_label.pack()
login_password_entry = tk.Entry(login_tab, show="*")
login_password_entry.pack()

login_submit_button = tk.Button(login_tab, text="Login")
login_submit_button.pack()

# RSA key generation
global public_key, private_key
def get_rsa_keys():
    global public_key, private_key
    KEY_SIZE = 2048

    def generate_keys():
        global public_key, private_key
        print("Generating RSA keys...")
        public_key, private_key = rsa.newkeys(KEY_SIZE)
        with open('public_key.pem', mode='wb') as public_file:
            public_file.write(public_key.save_pkcs1())
        with open('private_key.pem', mode='wb') as private_file:
            private_file.write(private_key.save_pkcs1())
        print("Keys generated!")

    if os.path.exists('public_key.pem') and os.path.exists('private_key.pem'):
        try:
            with open('public_key.pem', mode='rb') as public_file:
                public_key = rsa.PublicKey.load_pkcs1(public_file.read())
            with open('private_key.pem', mode='rb') as private_file:
                private_key = rsa.PrivateKey.load_pkcs1(private_file.read())
            print("Keys loaded successfully!")
        except:
            generate_keys()
    else:
        generate_keys()

    return public_key, private_key

def display_user_list(usernames):
    # Create a new window
    list_window = tk.Toplevel()
    list_window.title("User List")

    # Create a listbox widget
    listbox = tk.Listbox(list_window)
    listbox.pack(fill=tk.BOTH, expand=True)

    # Insert usernames into the listbox
    for username in usernames:
        listbox.insert(tk.END, username)

    # Add a scrollbar
    scrollbar = ttk.Scrollbar(list_window, orient='vertical', command=listbox.yview)
    scrollbar.pack(side=tk.RIGHT, fill=tk.Y)
    listbox.config(yscrollcommand=scrollbar.set)

    # Run the window's main loop
    list_window.mainloop()

# ======================================================================================================================
"""TODO: Implement the following functions to complete the application.

You will need to: 
    * Run "pip install rsa" in the terminal to install the rsa library
    * Use the hashlib library to hash the passwords with sha256 (using hashlib.sha256(password.encode()).hexdigest())
    * Use the RSA keys generated above to encrypt and decrypt the credentials in a file called "accounts.txt"
        * Use the "rsa.encrypt(text, public_key)" function to encrypt the credentials
        * Use the "rsa.decrypt(text, private_key)" function to decrypt the credentials
        * To encrypt a str, you will need to encode it first (e.g. "string".encode())
        * To decrypt a str, you will need to decode it after decrypting (e.g. rsa.decrypt(text, private_key).decode())
    * Use the base64 library to encode the encrypted credentials before writing them to the file
        * Use "base64.b64encode(text).decode()" to encode the encrypted credentials as base64
        * Use "base64.b64decode(text)" to decode the encrypted credentials from base64
    * Use the os library to check if the password database file exists (os.path.exists('accounts.txt'))
    * Use tk.messagebox.showinfo(title="Title", message="Message") to pop up a message box (success)
    * Use tk.messagebox.showerror(title="Title", message="Message") to pop up an error message box (failure)
    * Use "reg_username_entry.get()" to get the text from the username entry box on the registration tab
    * Use "reg_password_entry.get()" to get the text from the password entry box on the registration tab
    * Use "login_username_entry.get()" to get the text from the username entry box on the login tab
    * Use "login_password_entry.get()" to get the text from the password entry box on the login tab
"""

# Backend Functions
def register_user():
    # Grab the username and password from the entry boxes, then hash the password with sha256 and call save_to_file
    # Pop up a messagebox if account registration is successful or if the username already exists
    username = reg_username_entry.get()
    password = reg_password_entry.get()
    success = save_to_file(username, hashlib.sha256(password.encode()).hexdigest())
    
    if not success:
      messagebox.showerror(title="Registration Unsuccessful", message="This username already exists.")

    if success: 
      messagebox.showinfo(title="Registration Complete", message="You may now log in.") 
    pass

def login_user():
    # Grab the username and password from the entry boxes, 
    # then hash the password with sha256 and compare to the saved hash
    # Pop up a messagebox if login is successful or if the username/password is incorrect
    # If the login is successful, pop up a new window with a listbox containing all the usernames in the file
    # using the display_user_list function and your get_user_list function
    username = login_username_entry.get()
    password = login_password_entry.get()
    hash = hashlib.sha256(password.encode()).hexdigest()
    if  not validate_account(username, hash):
      messagebox.showerror(title="Login Failed", message="Wrong username or password.")
    else:
      messagebox.showinfo(title="Login Successful", message="You have now logged in.") 

      display_user_list(get_user_list())
    pass

def save_to_file(username, password_hash):
    global public_key, private_key
    # Encrypt the username and password with RSA
    # Save credentials to 'accounts.txt'; create the file if it doesn't exist, otherwise append a new line to it
    # using "with open('accounts.txt', mode='a') as file:" and "file.write(str)"
    # Pop up a messagebox if account registration is successful or if the username already exists
    # Return True if registration is successful, False otherwise (username already exists)
    # Hint: write the encrypted username and password to the file as a single string, separated by a tab character
    # you'll need to encode the encrypted strings as base64 before writing them to the file
    # e.g., base64.b64encode(encrypted_username).decode() to encode the encrypted username as base64
    if check_username_exists(username):
      return False

    if not os.path.exists('accounts.txt'):
      file = open("accounts.txt", "x")
    else:
      file = open("accounts.txt", "a")

    e_user = rsa.encrypt(username.encode(), public_key)
    e_pass = rsa.encrypt(password_hash.encode(), public_key)

    file.write(base64.b64encode(e_user).decode() + "\t" + base64.b64encode(e_pass).decode() + "\n")
    return True

def check_username_exists(username):
    global public_key, private_key
    # Check if the username exists in the credentials file
    # Return True if the username exists, False otherwise (username or file don't exist)
    # Hint: you'll need to decode the encrypted username from base64 before comparing it to the username
    # using rsa.decrypt(base64.b64decode(encrypted_username), private_key).decode() to decrypt the username
    if not os.path.exists('accounts.txt'):
      return False

    users = get_user_list()
    return any(username == name for name in users)

def validate_account(username, attempted_hash):
    global public_key, private_key
    # Read and decrypt credentials from the file and compare to the attempted login
    # Return True if login is successful, False otherwise (incorrect password, or username or file don't exist)
    # Hint: you'll need to decode the encrypted username and password from base64 before comparing them (see above)
    with open("accounts.txt", "r") as file:
      for line in file:
          encrypted_username, encrypted_password = line.strip().split('\t')
          decrypted_username = rsa.decrypt(base64.b64decode(encrypted_username), private_key).decode()
          decrypted_password_hash = rsa.decrypt(base64.b64decode(encrypted_password), private_key).decode()
      
          if decrypted_username == username and decrypted_password_hash == attempted_hash:
              return True
    return False

def get_user_list():
    global public_key, private_key
    # Read and decrypt credentials from the file and return a list of all the usernames
    # Return an empty list if the file doesn't exist
    if not os.path.exists('accounts.txt'):
      return []

    users = []
    with open("accounts.txt", "r") as file:
      for line in file:
        info = [splits for splits in line.split("\t") if splits]
        users.append(rsa.decrypt(base64.b64decode(info[0]), private_key).decode())
          
    return users

# Bind functions to buttons
reg_submit_button.config(command=register_user)
login_submit_button.config(command=login_user)

# Main loop to run the application
get_rsa_keys()
root.mainloop()
