{
  description = "QMK for Keebio";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
  };
  
  outputs = { self, nixpkgs }:

  let
    pkgs = nixpkgs.legacyPackages.x86_64-linux;

    # qmk_firmware = pkgs.fetchgit {
    #   url = "https://github.com/qmk/qmk_firmware";
    #   deepClone = false;
    #   fetchSubmodules = true;
    #   rev = "08c662f286ddfd12a985f57b584b02eca5af0ae6";
    #   hash = "sha256-HcrnNIQXqdyUEf+exGTti3JEGJfOaohw8pWeO5P30B4=";
    #   leaveDotGit = true;
    # };
  in {
    devShells.x86_64-linux.default = pkgs.mkShell {
      packages = [
        pkgs.qmk
        pkgs.dos2unix
      ];
      # QMK_HOME = "${qmk_firmware}";

      # shellHook = ''
      #   qmk doctor
      # '';
    };
  };
}
