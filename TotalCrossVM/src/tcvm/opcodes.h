/*********************************************************************************
 *  TotalCross Software Development Kit                                          *
 *  Copyright (C) 2000-2012 SuperWaba Ltda.                                      *
 *  All Rights Reserved                                                          *
 *                                                                               *
 *  This library and virtual machine is distributed in the hope that it will     *
 *  be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of    *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                         *
 *                                                                               *
 *********************************************************************************/



#ifndef TC_OPCODES_H
#define TC_OPCODES_H

#define BREAK                0
#define MOV_regI_regI        1
#define MOV_regI_field       2
#define MOV_regI_static      3
#define MOV_regI_aru         4
#define MOV_regI_arc         5
#define MOV_regI_sym         6
#define MOV_regI_s18         7
#define MOV_regI_arlen       8
#define MOV_regO_regO        9
#define MOV_regO_field       10
#define MOV_regO_static      11
#define MOV_regO_aru         12
#define MOV_regO_arc         13
#define MOV_regO_sym         14
#define MOV_reg64_reg64      15
#define MOV_reg64_field      16
#define MOV_reg64_static     17
#define MOV_reg64_aru        18
#define MOV_reg64_arc        19
#define MOV_regD_sym         20
#define MOV_regL_sym         21
#define MOV_regD_s18         22
#define MOV_regL_s18         23
#define MOV_field_regI       24
#define MOV_field_regO       25
#define MOV_field_reg64      26
#define MOV_static_regI      27
#define MOV_static_regO      28
#define MOV_static_reg64     29
#define MOV_arc_regI         30
#define MOV_arc_regO         31
#define MOV_arc_reg64        32
#define MOV_aru_regI         33
#define MOV_aru_regO         34
#define MOV_aru_reg64        35
#define MOV_arc_regIb        36
#define MOV_arc_reg16        37
#define MOV_aru_regIb        38
#define MOV_aru_reg16        39
#define MOV_regIb_arc        40
#define MOV_reg16_arc        41
#define MOV_regIb_aru        42
#define MOV_reg16_aru        43
#define MOV_regO_null        44
#define INC_regI             45
#define ADD_regI_regI_regI   46
#define ADD_regI_s12_regI    47
#define ADD_regI_arc_s6      48
#define ADD_regI_aru_s6      49
#define ADD_regI_regI_sym    50
#define ADD_regD_regD_regD   51
#define ADD_regL_regL_regL   52
#define ADD_aru_regI_s6      53
#define SUB_regI_s12_regI    54
#define SUB_regI_regI_regI   55
#define SUB_regD_regD_regD   56
#define SUB_regL_regL_regL   57
#define MUL_regI_regI_s12    58
#define MUL_regI_regI_regI   59
#define MUL_regD_regD_regD   60
#define MUL_regL_regL_regL   61
#define DIV_regI_regI_s12    62
#define DIV_regI_regI_regI   63
#define DIV_regD_regD_regD   64
#define DIV_regL_regL_regL   65
#define MOD_regI_regI_s12    66
#define MOD_regI_regI_regI   67
#define MOD_regD_regD_regD   68
#define MOD_regL_regL_regL   69
#define SHR_regI_regI_s12    70
#define SHR_regI_regI_regI   71
#define SHR_regL_regL_regL   72
#define SHL_regI_regI_s12    73
#define SHL_regI_regI_regI   74
#define SHL_regL_regL_regL   75
#define USHR_regI_regI_s12   76
#define USHR_regI_regI_regI  77
#define USHR_regL_regL_regL  78
#define AND_regI_regI_s12    79
#define AND_regI_aru_s6      80
#define AND_regI_regI_regI   81
#define AND_regL_regL_regL   82
#define OR_regI_regI_s12     83
#define OR_regI_regI_regI    84
#define OR_regL_regL_regL    85
#define XOR_regI_regI_s12    86
#define XOR_regI_regI_regI   87
#define XOR_regL_regL_regL   88
#define JEQ_regO_regO        89
#define JEQ_regO_null        90
#define JEQ_regI_regI        91
#define JEQ_regL_regL        92
#define JEQ_regD_regD        93
#define JEQ_regI_s6          94
#define JEQ_regI_sym         95
#define JNE_regO_regO        96
#define JNE_regO_null        97
#define JNE_regI_regI        98
#define JNE_regL_regL        99
#define JNE_regD_regD        100
#define JNE_regI_s6          101
#define JNE_regI_sym         102
#define JLT_regI_regI        103
#define JLT_regL_regL        104
#define JLT_regD_regD        105
#define JLT_regI_s6          106
#define JLE_regI_regI        107
#define JLE_regL_regL        108
#define JLE_regD_regD        109
#define JLE_regI_s6          110
#define JGT_regI_regI        111
#define JGT_regL_regL        112
#define JGT_regD_regD        113
#define JGT_regI_s6          114
#define JGE_regI_regI        115
#define JGE_regL_regL        116
#define JGE_regD_regD        117
#define JGE_regI_s6          118
#define JGE_regI_arlen       119
#define DECJGTZ_regI         120
#define DECJGEZ_regI         121
#define TEST_regO            122
#define JUMP_s24             123
#define CONV_regI_regL       124
#define CONV_regI_regD       125
#define CONV_regIb_regI      126
#define CONV_regIc_regI      127
#define CONV_regIs_regI      128
#define CONV_regL_regI       129
#define CONV_regL_regD       130
#define CONV_regD_regI       131
#define CONV_regD_regL       132
#define RETURN_regI          133
#define RETURN_regO          134
#define RETURN_reg64         135
#define RETURN_void          136
#define RETURN_s24I          137
#define RETURN_null          138
#define RETURN_s24D          139
#define RETURN_s24L          140
#define RETURN_symI          141
#define RETURN_symO          142
#define RETURN_symD          143
#define RETURN_symL          144
#define SWITCH               145
#define NEWARRAY_len         146
#define NEWARRAY_regI        147
#define NEWARRAY_multi       148
#define NEWOBJ               149
#define THROW                150
#define INSTANCEOF           151
#define CHECKCAST            152
#define CALL_normal          153
#define CALL_virtual         154
#define JUMP_regI            155
#define MONITOR_Enter        156
#define MONITOR_Exit         157
#define OPCODE_LENGTH        158 // last opcode + 1

#endif