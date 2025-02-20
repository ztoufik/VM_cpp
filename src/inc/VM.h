#ifndef __VM__
#define __VM__

#include"Program.h"


namespace VM{
class _VM;
void _VM::load(Chunk&);
void _VM::run();
using VM=std::unique_ptr<_VM>;
VM create_vm(Chunk& chunk);
}



#endif
