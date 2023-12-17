#include "package_manager.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " [-b | --build] [-d | --directory] ..." << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];

        if (arg == "-b" || arg == "--build") {
            mpm::build_source_tree::build_source();
        } else if (arg == "-ib" || arg == "--install-build") {
            mpm::build_source_tree::install_build();
        } else if (arg == "-td" || arg == "--track-deps") {
            mpm::build_source_tree::track_build_deps();
        } else if (arg == "-lt" || arg == "--list-build-tree") {
            mpm::build_source_tree::list_build_tree();
        } else if (arg == "-ip" || arg == "--install-lib") {
            mpm::download_package::install_lib();
        } else if (arg == "-cb" || arg == "--clean-build") {
            mpm::build_source_tree::clean_source_tree();
        } else if (arg == "-pg" || arg == "--publish-lib") {
            mpm::manage_online_package::publish_lib();
        } else if (arg == "-up" || arg == "--update-lib") {
        	mpm::manage_online_package::update_lib();
       	} else if (arg == "-id" || arg == "--install-lib-deps") {
       		mpm::download_package::install_lib_deps();
        } else {
            std::cout << "Unknown option: " << arg << std::endl;
            mpm::print_help();
            return 1;
        }
    }

    return 0;
}

void mpm::print_help(void) {
	
}

