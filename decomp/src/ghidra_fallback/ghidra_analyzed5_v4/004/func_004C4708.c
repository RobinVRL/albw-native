#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010BAB4(undefined4 param_1);
extern int func_002E011C(undefined4 *param_1);
extern int func_004A0038(int param_1,int param_2,int param_3,uint param_4,int *param_5,int param_6);
extern int DAT_004c47b8;
extern undefined4 DAT_004c47bc;
extern int *DAT_004c47cc;
extern char s_MassExpHeap_004c47c0[];
extern char s_MassUnitHeap_004c47d0[];

// USA 004C4708 <- EU 004C46E0 (Ghidra, non-matching)
// GLOBAL DAT_004c47b8 int
// GLOBAL DAT_004c47bc undefined4
// GLOBAL DAT_004c47cc int *
// GLOBAL s_MassExpHeap_004c47c0 string
// GLOBAL s_MassUnitHeap_004c47d0 string

void func_004C4708(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  puVar1 = (undefined4 *)func_0010BAB4(0x34);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_002E011C(puVar1);
    puVar2 = func_002E011C(puVar2 + 3);
    puVar2 = func_002E011C(puVar2 + 3);
    puVar1 = func_002E011C(puVar2 + 3);
    puVar2 = puVar1 + -9;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 1;
  }
  local_18 = DAT_004c47bc;
  *(undefined4 **)(DAT_004c47b8 + param_1) = puVar2;
  if (param_2 != 0) {
    local_14 = s_MassExpHeap_004c47c0;
    piVar3 = func_0010B954(0xb0000,(int)&local_18,(int *)0x0,1,0);
    *(int **)(param_1 + 0x1c) = piVar3;
    return;
  }
  local_14 = s_MassUnitHeap_004c47d0;
  piVar3 = func_004A0038(0x2a800,8,(int)&local_18,4,*(int **)(*DAT_004c47cc + 0x1fa8),0);
  *(int **)(param_1 + 0x18) = piVar3;
  return;
}

