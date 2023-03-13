{ pkgs }: {
	deps = [
		pkgs.lf
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}