{ pkgs }: {
	deps = [
		pkgs.haskellPackages.servant-multipart-client
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}