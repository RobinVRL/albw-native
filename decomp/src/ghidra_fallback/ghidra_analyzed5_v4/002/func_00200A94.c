#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00588BE4(int param_1);
extern int iRam00200b5c;
extern int *DAT_00200b3c;
extern undefined4 DAT_00200b40;
extern char s_SE_Gigabari_ELEC_END_00200b44[];

// USA 00200A94 <- EU 00200A94 (Ghidra, non-matching)
// GLOBAL DAT_00200b3c int *
// GLOBAL DAT_00200b40 undefined4
// GLOBAL UNK_00200b5c int
// GLOBAL s_SE_Gigabari_ELEC_END_00200b44 string

void func_00200A94(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  iVar3 = func_00588BE4(param_1);
  uVar2 = DAT_00200b40;
  piVar1 = DAT_00200b3c;
  if ((iVar3 != *DAT_00200b3c) || (*(char *)(param_1 + 0x93c) != '\0')) {
    *(undefined4 *)(param_1 + 0x3dc) = DAT_00200b40;
    *(undefined4 *)(param_1 + 0x3e0) = uVar2;
    *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  }
  func_004FABDC(param_1,3,4,0);
  func_004F88A0((int *)param_1,*(undefined2 **)(param_1 + 0x3a4));
  *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) =
       *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) & 0xfffdffff;
  iVar3 = func_00588BE4(param_1);
  if (iVar3 == *piVar1) {
    pcStack_14 = s_SE_Gigabari_ELEC_END_00200b44;
    iStack_18 = iRam00200b5c;
    func_00150A84((int *)param_1,&iStack_18,0);
  }
  return;
}

