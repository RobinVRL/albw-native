#include "ghidra_types.h"

extern int func_00104338(uint param_1,int param_2);
extern int func_003C8874(undefined4 *param_1,short *param_2,undefined4 param_3);
extern int func_003C8A48(short *param_1);
extern int func_003C9BCC(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003CE6EC(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003D302C(undefined4 param_1,undefined4 param_2);
extern int DAT_003ce084;
extern int DAT_003ce088;
extern uint DAT_003ce08c;

// USA 003CDF3C <- EU 003CDF18 (Ghidra, non-matching)
// GLOBAL DAT_003ce084 int
// GLOBAL DAT_003ce088 int
// GLOBAL DAT_003ce08c uint

undefined4 func_003CDF3C(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  ulonglong uVar12;
  
  iVar4 = DAT_003ce088;
  iVar3 = DAT_003ce084;
  uVar9 = 0;
  iVar10 = DAT_003ce084 + 1;
  do {
    while( true ) {
      while( true ) {
        psVar6 = *(short **)(iVar4 + 4);
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        uVar8 = 3;
        *(undefined4 *)(param_1 + 0x10) = 0;
        uVar5 = func_003C8874((undefined4 *)(param_1 + 8),psVar6,3);
        if (-1 < (int)uVar5) {
          return uVar9;
        }
        uVar1 = (uVar5 & 0x3fc00) >> 10;
        if (((uVar1 != 0x11) || (uVar8 = uVar5 & 0x3ff, uVar8 < 0xe6)) || (0x153 < uVar8)) break;
        func_00104338(DAT_003ce08c,0);
      }
      if (((uVar1 != 0x11) || (uVar8 = uVar5 & 0x3ff, uVar8 < 100)) ||
         (uVar12 = CONCAT44(0x11,uVar5), 0xb3 < uVar8)) break;
code_r0x003cdfcc:
      func_003CE6EC((int)uVar12,(int)(uVar12 >> 0x20),uVar8);
      uVar9 = 1;
    }
    if (((uVar1 == 0x11) && (uVar8 = uVar5 & 0x3ff, 0x167 < uVar8)) &&
       (uVar7 = 0x11, (int)uVar8 <= iVar3)) {
LAB_003ce018:
      psVar6 = *(short **)(iVar4 + 4);
      func_003C9BCC(uVar5,uVar7,uVar8);
      uVar5 = func_003C8A48(psVar6);
      if ((uVar5 & 0x3fc00) == 0x4400) {
        uVar12 = CONCAT44(uVar5,uVar5) & 0x3ffffffffff;
        if ((99 < (uVar5 & 0x3ff)) && ((uVar5 & 0x3ff) < 0xb4)) goto code_r0x003cdfcc;
      }
      uVar12 = CONCAT44(0x3ce05c,uVar5);
      uVar8 = -((int)uVar5 >> 0x1f);
      if (uVar8 != 0) {
        uVar12 = func_003D302C(uVar5,0x3ce05c);
      }
      goto code_r0x003cdfcc;
    }
    if (uVar1 == 0x11) {
      uVar7 = uVar5 & 0x3ff;
      bVar11 = SBORROW4(iVar10,uVar7);
      iVar2 = iVar10 - uVar7;
      if (iVar10 <= (int)uVar7) {
        bVar11 = SBORROW4(uVar7,400);
        iVar2 = uVar7 - 400;
      }
      if (iVar2 < 0 != bVar11) goto LAB_003ce018;
    }
    if ((int)uVar5 < 0) {
      func_003D302C(uVar5,0x3ce074);
    }
  } while( true );
}

