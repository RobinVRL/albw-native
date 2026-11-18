#include "ghidra_types.h"

extern int func_0015B650(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_0015FF78(int param_1,int param_2);
extern int func_00520FC0(void);
extern int func_0054F9E4(int param_1,uint param_2);
extern int func_0054FBC4(int param_1,float *param_2,float *param_3);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern int DAT_0015c274;

// USA 0015C114 <- EU 0015C118 (Ghidra, non-matching)
// GLOBAL DAT_0015c274 int

undefined4 func_0015C114(undefined4 *param_1)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  undefined4 uVar6;
  undefined4 in_r3;
  
  uVar1 = *(ushort *)((int)param_1 + 0x2e) & 0xff;
  if ((((uVar1 < 4) && (1 < uVar1)) && (-1 < (int)(uVar1 - 2))) ||
     ((uint)param_1[0x238] < (uint)param_1[0x239])) {
    return 0;
  }
  pfVar2 = (float *)func_00520FC0();
  uVar6 = 0;
  uVar1 = func_0054FBC4((int)(param_1 + 0x26d),(float *)(param_1 + 0x265),(float *)0x0);
  pfVar3 = (float *)func_0054F9E4((int)(param_1 + 0x26d),uVar1);
  iVar5 = DAT_0015c274;
  if (((DAT_0015c274 <
        (int)ALBW_AS_U32(SQRT((*pfVar3 - *pfVar2) * (*pfVar3 - *pfVar2) +
                  (pfVar3[2] - pfVar2[2]) * (pfVar3[2] - pfVar2[2])))) &&
      (iVar4 = func_0015B650(param_1,DAT_0015c274,uVar6,in_r3), iVar5 = extraout_r1, iVar4 == 0)) &&
     (((*(ushort *)((int)param_1 + 0x2e) & 0xff) != 0 || (1 < (uint)param_1[899])))) {
    if (param_1[0x381] != uVar1) {
      return func_0065836C(param_1 + 0x22f,0xb);
    }
    if (*(char *)(param_1 + 0x37c) == '\0') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x37c) = 0;
  }
  else if ((((*(ushort *)((int)param_1 + 0x2e) & 0xff) == 0) &&
           (iVar5 = func_0015B650(param_1,iVar5,uVar6,in_r3), iVar5 == 0)) &&
          (99 < (int)param_1[0x22f])) {
    return func_0015FF78((int)param_1,1);
  }
  return func_0015FF78((int)param_1,0);
}

