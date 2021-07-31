{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  buildInputs = with pkgs; [
    watchexec
  ];
}

# watchexec -e js,css,html npm run build
