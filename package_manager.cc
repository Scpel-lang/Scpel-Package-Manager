#include "package_manager.h"

// Building
void mpm::build_source_tree::build_source(void) {
	std::cout<<"Building source tree...";
}

void mpm::build_source_tree::clean_source_tree(void) {
	std::cout<<"Cleaning source tree...";
}

void mpm::build_source_tree::install_build(void) {
	std::cout<<"Installing build...";
}

void mpm::build_source_tree::track_build_deps(void) {
	std::cout<<"Tracking package dependencies...";
}

void mpm::build_source_tree::list_build_tree(void) {
	std::cout<<"Listing source tree...";
}

// Managing
void mpm::manage_online_package::update_lib(void) {
	std::cout<<"Updating package...";
}

void mpm::manage_online_package::publish_lib(void) {
	std::cout<<"Publishing library...";
}

// Downloading
void mpm::download_package::install_lib(void) {
	std::cout<<"Installing library...";
}

void mpm::download_package::install_lib_deps(void) {
	std::cout<<"Installing library dependencies...";
}

