#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005f67f4;
extern undefined4 *DAT_005f67f8;
extern undefined4 DAT_005f680c;
extern undefined4 DAT_005f6810;
extern undefined4 DAT_005f6814;
extern undefined4 *DAT_005f6818;
extern undefined4 DAT_005f6844;
extern char s_Ed_PlayRecordT_005f67fc[];
extern char s_InHard_005f6834[];
extern char s_InNormal_005f681c[];
extern char s_OutHard_005f683c[];
extern char s_OutNormal_005f6828[];

// USA 005F6790 <- EU 005F6768 (Ghidra, non-matching)
// GLOBAL DAT_005f67f4 int
// GLOBAL DAT_005f67f8 undefined4 *
// GLOBAL DAT_005f680c undefined4
// GLOBAL DAT_005f6810 undefined4
// GLOBAL DAT_005f6814 undefined4
// GLOBAL DAT_005f6818 undefined4 *
// GLOBAL DAT_005f6844 undefined4
// GLOBAL s_Ed_PlayRecordT_005f67fc string
// GLOBAL s_InHard_005f6834 string
// GLOBAL s_InNormal_005f681c string
// GLOBAL s_OutHard_005f683c string
// GLOBAL s_OutNormal_005f6828 string

undefined4 func_005F6790(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005f67f4;
  *(undefined4 *)(DAT_005f67f4 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar3 = DAT_005f680c;
  puVar2 = DAT_005f67f8;
  *DAT_005f67f8 = 0;
  puVar2[1] = 0;
  puVar2[3] = s_Ed_PlayRecordT_005f67fc;
  puVar2[2] = uVar3;
  puVar2 = DAT_005f6818;
  DAT_005f6818[1] = s_InNormal_005f681c;
  *puVar2 = uVar3;
  puVar2[3] = s_OutNormal_005f6828;
  puVar2[2] = uVar3;
  puVar2[5] = s_InHard_005f6834;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_OutHard_005f683c;
  return func_005902C0(0);
}

