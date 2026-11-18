#include "ghidra_types.h"

extern int func_0026F4EC(int param_1,int param_2,undefined4 *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004C6654(int param_1,uint param_2);
extern int func_004EA9E4(int param_1,int *param_2,undefined4 param_3);
extern int func_0053ED74(int param_1);
extern undefined4 DAT_001dea20;
extern undefined4 DAT_001dea24;
extern int *DAT_001dea28;
extern int *DAT_001dea34;
extern int DAT_001dea4c;
extern int *DAT_001dea50;
extern char s_SE_PL_Shield_GARD_001dea38[];
extern char s_Shield_001dea2c[];

// USA 001DE958 <- EU 001DE958 (Ghidra, non-matching)
// GLOBAL DAT_001dea20 undefined4
// GLOBAL DAT_001dea24 undefined4
// GLOBAL DAT_001dea28 int *
// GLOBAL DAT_001dea34 int *
// GLOBAL DAT_001dea4c int
// GLOBAL DAT_001dea50 int *
// GLOBAL s_SE_PL_Shield_GARD_001dea38 string
// GLOBAL s_Shield_001dea2c string

undefined4 func_001DE958(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define aiStack_18 ((int *)(albw_frame + 0x18))
  uVar1 = DAT_001dea20;
  iVar3 = *(int *)(param_1 + 0x614);
  *(undefined4 *)(iVar3 + 0x9c) = DAT_001dea24;
  *(undefined4 *)(iVar3 + 0xa0) = uVar1;
  iVar3 = func_0053ED74(*(int *)(param_1 + 0x600));
  local_30 = *(undefined4 *)(iVar3 + 0xc);
  local_2c = *(undefined4 *)(iVar3 + 0x1c);
  local_28 = *(undefined4 *)(iVar3 + 0x2c);
  func_0026F4EC(*(int *)(*DAT_001dea28 + 0xf9c),4,&local_30);
  if (*(int *)(param_1 + 0x344) != 0) {
    func_004A1B9C(aiStack_18,*(int *)(param_1 + 0x344),(uint *)s_Shield_001dea2c);
  }
  piVar2 = DAT_001dea34;
  if ((*DAT_001dea34 != 0) && (func_004C6654(*DAT_001dea34,0x26), *(int *)(param_1 + 0x438) == 3)) {
    func_004C6654(*piVar2,0x27);
  }
  local_1c = s_SE_PL_Shield_GARD_001dea38;
  local_20 = DAT_001dea4c;
  return func_004EA9E4(*DAT_001dea50,&local_20,&local_30);
}

