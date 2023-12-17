#include <iostream>
#include <string>

namespace mpm {

namespace build_source_tree {
void build_source(void);
void clean_source_tree(void);
void track_build_deps(void);
void install_build(void);
void list_build_tree(void);
}

namespace manage_online_package {
void update_lib(void);
void publish_lib(void);
}

namespace download_package {
void install_lib(void);
void install_lib_deps(void);
}

void print_help(void);

}
