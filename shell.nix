{ pkgs? import <nixpkgs> {} }:
pkgs.mkShell {
  nativeBuildInputs = [
    pkgs.gcc
    pkgs.gccStdenv
    pkgs.gdb
    pkgs.cmake
    pkgs.qtcreator
    pkgs.libsForQt514.full
  ];
}
