#ifndef VIRTUAL_MACHINE_OPCODES_HPP
#define VIRTUAL_MACHINE_OPCODES_HPP

enum Opcodes {
    DECLARE_FUNCTION,
    CALL_FUNCTION,
    RETURN,

    LOAD_NUMBER,
    ADD_NUMBER,
    MULTIPLY_NUMBER,
    DIVIDE_NUMBER,
    SUBTRACT_NUMBER,
    POW_NUMBER,
    MOD_NUMBER,
    EQUAL_NUMBER,
    GREATER_THAN_NUMBER,
    GREATER_THAN_EQUAL_NUMBER,
    PRINT_NUMBER,

    LOAD_BOOLEAN,
    EQUAL_BOOLEAN,
    PRINT_BOOLEAN,

    LOAD_STRING,
    APPEND_STRING,
    SUBSTRING_WITH_LENGTH,
    SUBSTRING_AT,
    PRINT_STRING,

    JUMP,
    JUMP_TRUE,
    JUMP_FALSE,

    STORE_LOCAL,
    LOAD_LOCAL,

    STORE_GLOBAL,
    LOAD_GLOBAL,

    HALT,
};

#endif //VIRTUAL_MACHINE_OPCODES_HPP
