#include "ghidra_types.h"

extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);
extern int DAT_0040f004;

// USA 0040EF54 <- EU 0040EF34 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint *
// PARAM param_6 Stack[0x4]:1 undefined1
// PARAM param_7 Stack[0x8]:1 undefined1
// PARAM param_8 Stack[0xc]:4 undefined4
// PARAM param_9 Stack[0x10]:4 undefined4
// PARAM param_10 Stack[0x14]:1 undefined1
// PARAM param_11 Stack[0x18]:4 undefined1 *
// GLOBAL DAT_0040f004 int

undefined4 func_0040EF54(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,uint *param_5,
                  undefined1 param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9,
                  undefined1 param_10,undefined1 *param_11,float fparam_0)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *(short *)(DAT_0040f004 + param_1) = (short)param_4;
  piVar1 = (int *)func_00412BB4();
  puVar2 = (undefined4 *)func_00412A3C(piVar1,0x19);
  puVar2[3] = piVar1[0x61];
  *(undefined1 *)(puVar2 + 1) = 0x26;
  puVar2[4] = param_1 + 0x114;
  puVar2[5] = param_2;
  puVar2[6] = param_3;
  *(short *)(puVar2 + 7) = (short)param_4;
  func_001163A0((uint *)((int)puVar2 + 0x1e),param_5,0x34);
  *(undefined1 *)((int)puVar2 + 0x52) = param_6;
  *(undefined1 *)((int)puVar2 + 0x53) = param_7;
  puVar2[0x17] = ALBW_AS_U32(fparam_0);
  puVar2[0x15] = param_8;
  puVar2[0x16] = param_9;
  *(undefined1 *)(puVar2 + 0x18) = param_10;
  *(undefined1 *)((int)puVar2 + 0x61) = *param_11;
  *(undefined1 *)((int)puVar2 + 0x62) = param_11[1];
  return func_00412C68((int)piVar1,puVar2);
}

