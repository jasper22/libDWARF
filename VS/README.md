If following files missing in libDWARF\libdwarf folder:

dwarf_names.c
dwarf_names.h
dwarf_names_enum.h
dwarf_names_new.h

you should run \libDWARF.dwarfGen project and pass as input (-i) and output (-o) parameters path to libDWARF\libdwarf folder. This action will modify \libdwarf.h and insert correct values that declared:

extern int dwarf_get_TAG_name(unsigned int /*val_in*/, const char ** /*s_out */);
extern int dwarf_get_children_name(unsigned int /*val_in*/, const char ** /*s_out */);
extern int dwarf_get_FORM_name(unsigned int /*val_in*/, const char ** /*s_out */);
extern int dwarf_get_AT_name(unsigned int /*val_in*/, const char ** /*s_out */);
...
...
