#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_00584C14(int param_1,int *param_2);
extern int DAT_003095c0;
extern char s_after_003095b8[];
extern char s_before_003095c4[];

// USA 00309548 <- EU 00309524 (Ghidra, non-matching)
// GLOBAL DAT_003095c0 int
// GLOBAL s_after_003095b8 string
// GLOBAL s_before_003095c4 string

undefined4 func_00309548(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_003095c0;
  piVar3 = (int *)(param_1 + 0x40c);
  if (*(char *)(param_1 + 0x436) != '\0') {
    local_14 = s_after_003095b8;
    local_18 = DAT_003095c0;
    uVar2 = func_00584C14(*(int *)(param_1 + 0x40c),&local_18);
    func_004CEA18(*piVar3,param_2,uVar2);
    local_14 = s_before_003095c4;
    local_18 = iVar1;
    uVar2 = func_00584C14(*piVar3,&local_18);
    return func_004CEA18(*piVar3,param_2 ^ 1,uVar2);
  }
  return func_004CF478(*(int *)(param_1 + 0x40c),param_2 ^ 1);
}

