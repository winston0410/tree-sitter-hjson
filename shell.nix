{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  buildInputs = with pkgs; [
    watchexec
    graphviz
  ];
}

# watchexec -e js,css,html npm run build
