{ pkgs }: {
	deps = [
   pkgs.python39Packages.pip
		pkgs.python39Full
  pkgs.run
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}