#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);

// USA 0041044C <- EU 0041042C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// PARAM param_6 Stack[0x4]:1 undefined1
// PARAM param_7 Stack[0x8]:8 undefined8

undefined4 func_0041044C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined1 param_5
                  ,undefined1 param_6,undefined8 param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)func_00412BB4();
  puVar2 = (undefined4 *)func_00412A3C(piVar1,0xb);
  puVar2[3] = piVar1[0x61];
  *(undefined1 *)(puVar2 + 1) = 0xd;
  puVar2[4] = param_1 + 0x124;
  puVar2[5] = param_2;
  puVar2[6] = param_3;
  puVar2[7] = param_4;
  *(undefined1 *)(puVar2 + 8) = param_5;
  *(undefined1 *)((int)puVar2 + 0x21) = param_6;
  puVar2[9] = (int)param_7;
  puVar2[10] = (int)((ulonglong)param_7 >> 0x20);
  return func_00412C68((int)piVar1,puVar2);
}

