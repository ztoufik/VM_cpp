#include<memory>

#include"VM.h"
#include"Program.h"

namespace VM{

    VM create_vm(Chunk& chunk){
        return make_unique<_VM>(chunk);
    }

    class _VM{
        using Ip=int;
        public:
            VM(Chunk& chunk):_chunk(chunk){
                _ip=0;
            }

            void load(Chunk&){

            }

            void run(){

            }

        private:
             Chunk& _chunk;
             Ip _ip;
    };
};
