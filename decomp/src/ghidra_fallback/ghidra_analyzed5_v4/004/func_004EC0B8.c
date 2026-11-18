// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00150C80(int *param_1,undefined4 param_2,int param_3);
extern int func_0025B7D8(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern undefined4 uRam004ec14c;
extern int DAT_004ec148;
extern char s_SE_PL_Sword_SWING_004ec134[];

// USA 004EC0B8 <- EU 004EC090 (Ghidra, non-matching)
// GLOBAL DAT_004ec148 int
// GLOBAL UNK_004ec14c uint
// GLOBAL s_SE_PL_Sword_SWING_004ec134 string

undefined4 func_004EC0B8(int param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((undefined4 *)(albw_frame + 0x8))
  #define iStack_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(uint * *)(albw_frame + 0x6c))
  uVar5 = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    iStack_18 = DAT_004ec148;
    local_14 = (uint *)s_SE_PL_Sword_SWING_004ec134;
    (**(code **)(DAT_004ec148 + 8))();
    puVar2 = local_14;
    puVar3 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    uVar4 = func_0056D3E4((int)puVar3,puVar2);
    uVar5 = 0;
    cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x8bc) + 9);
    if (*(int *)(param_1 + 0x5c) != 0) {
      func_0010A464(auStack_78);
      func_0025B7D8((int)auStack_78,uRam004ec14c);
      uVar5 = func_00150C80(*(int **)(param_1 + 0x5c),(int)cVar1 + uVar4,(int)auStack_78);
      func_0025B874(auStack_78);
    }
  }
  return uVar5;
}

