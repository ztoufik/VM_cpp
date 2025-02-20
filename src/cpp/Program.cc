#include<cstdint>
#include<vector>
#include"Program.h"

class Instruction{
    private:
        uint_fast16_t _op;
};

class Chunk{
    public:
        Chunk(std::vector<Instruction*>& insts):instructions(insts){}
        std::vector<Instruction*> instructions;
};
