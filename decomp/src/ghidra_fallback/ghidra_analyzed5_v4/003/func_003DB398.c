#include "ghidra_types.h"

extern ulonglong func_0011624C(uint param_1,uint param_2,uint param_3,uint param_4);
extern int func_003D3658(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int param_7,int param_8);
extern longlong func_00564538(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5);
extern uint *DAT_003db614;
extern uint DAT_003db618;
extern uint DAT_003db61c;
extern uint DAT_003db620;
extern int DAT_003db624;
extern uint *DAT_003db628;
extern int DAT_003db62c;
extern uint DAT_003db630;

// USA 003DB398 <- EU 003DB378 (Ghidra, non-matching)
// GLOBAL DAT_003db614 uint *
// GLOBAL DAT_003db618 uint
// GLOBAL DAT_003db61c uint
// GLOBAL DAT_003db620 uint
// GLOBAL DAT_003db624 int
// GLOBAL DAT_003db628 uint *
// GLOBAL DAT_003db62c int
// GLOBAL DAT_003db630 uint

undefined8 func_003DB398(void)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(uint *)(albw_frame + 0x8))
  #define local_54 (*(int *)(albw_frame + 0xc))
  #define local_50 ((uint *)(albw_frame + 0x10))
  #define local_48 (*(undefined8 *)(albw_frame + 0x18))
  #define local_40 (*(uint *)(albw_frame + 0x20))
  #define local_3c (*(int *)(albw_frame + 0x24))
  #define auStack_38 ((undefined4 *)(albw_frame + 0x28))
  #define auStack_30 ((undefined4 *)(albw_frame + 0x30))
  puVar3 = func_003D3658(auStack_38,2000,1,1,0,0,0,0);
  uVar6 = DAT_003db620;
  uVar5 = DAT_003db61c;
  lVar2 = (ulonglong)DAT_003db618 * (ulonglong)(*puVar3 - *DAT_003db614);
  local_40 = (uint)lVar2;
  local_3c = (puVar3[1] - (DAT_003db614[1] + (uint)(*puVar3 < *DAT_003db614))) * DAT_003db618 +
             (int)((ulonglong)lVar2 >> 0x20);
  local_48 = func_00564538(&local_40,local_3c,DAT_003db61c,DAT_003db620,0x12);
  puVar3 = func_003D3658(auStack_38,DAT_003db624,1,1,0,0,0,0);
  puVar4 = func_003D3658(auStack_30,2000,1,1,0,0,0,0);
  lVar2 = (ulonglong)DAT_003db618 * (ulonglong)(*puVar3 - *puVar4);
  local_40 = (uint)lVar2;
  local_3c = (puVar3[1] - (puVar4[1] + (uint)(*puVar3 < *puVar4))) * DAT_003db618 +
             (int)((ulonglong)lVar2 >> 0x20);
  lVar19 = func_00564538(&local_40,local_40,uVar5,uVar6,0x12);
  software_interrupt(0x28);
  puVar3 = (uint *)(DAT_003db62c + (*DAT_003db628 & 1) * 0x20);
  uVar12 = *puVar3;
  uVar13 = puVar3[1];
  uVar10 = puVar3[7];
  uVar11 = puVar3[6];
  coproc_moveto_Data_Memory_Barrier(0);
  uVar14 = (uint)lVar19 - puVar3[2];
  uVar16 = (int)((ulonglong)lVar19 >> 0x20) - (puVar3[3] + (uint)((uint)lVar19 < puVar3[2]));
  uVar20 = func_0011624C(0,1000,puVar3[4],(int)puVar3[4] >> 0x1f);
  uVar5 = (uint)(uVar20 >> 0x20);
  uVar8 = (uint)((uVar20 & 0xffffffff) * (ulonglong)uVar14 >> 0x20);
  lVar2 = (uVar20 & 0xffffffff) * (ulonglong)uVar16;
  uVar18 = (uint)lVar2;
  uVar17 = (uint)((ulonglong)uVar14 * (ulonglong)uVar5);
  uVar6 = uVar18 + uVar17;
  uVar7 = uVar6 + uVar8;
  uVar9 = uVar7 + uVar12;
  iVar15 = ((int)uVar16 >> 0x1f) * (int)uVar20 + (int)((ulonglong)lVar2 >> 0x20) +
           ((int)uVar5 >> 0x1f) * uVar14 + (int)((ulonglong)uVar14 * (ulonglong)uVar5 >> 0x20) +
           (uint)CARRY4(uVar18,uVar17) + uVar16 * uVar5 + (uint)CARRY4(uVar6,uVar8) + uVar13 +
           (uint)CARRY4(uVar7,uVar12);
  local_58 = DAT_003db630 - (uVar9 - uVar12);
  iVar1 = (iVar15 - (uVar13 + (uVar9 < uVar12))) + (uint)(DAT_003db630 < uVar9 - uVar12);
  local_54 = -iVar1;
  local_50[0] = 0;
  local_50[1] = 0;
  puVar3 = local_50;
  if ((int)-(local_54 + (uint)(local_58 != 0)) < 0 !=
      (SBORROW4(0,local_54) != SBORROW4(iVar1,(uint)(local_58 != 0)))) {
    puVar3 = &local_58;
  }
  uVar20 = func_0011624C(0,*puVar3,DAT_003db630,(int)DAT_003db630 >> 0x1f);
  uVar5 = (uint)(uVar20 >> 0x20);
  uVar8 = (uint)((uVar20 & 0xffffffff) * (ulonglong)uVar11 >> 0x20);
  lVar2 = (uVar20 & 0xffffffff) * (ulonglong)uVar10;
  uVar17 = (uint)lVar2;
  uVar16 = (uint)((ulonglong)uVar11 * (ulonglong)uVar5);
  uVar6 = uVar17 + uVar16;
  uVar7 = uVar6 + uVar8;
  uVar12 = uVar7 + uVar9;
  uVar13 = (uint)lVar19;
  uVar14 = (uint)((ulonglong)lVar19 >> 0x20);
  func_0011624C(uVar12 - (uint)local_48,
                (((int)uVar10 >> 0x1f) * (int)uVar20 + (int)((ulonglong)lVar2 >> 0x20) +
                 ((int)uVar5 >> 0x1f) * uVar11 + (int)((ulonglong)uVar11 * (ulonglong)uVar5 >> 0x20)
                 + (uint)CARRY4(uVar17,uVar16) + uVar10 * uVar5 + (uint)CARRY4(uVar6,uVar8) + iVar15
                + (uint)CARRY4(uVar7,uVar9)) - ((*(undefined4 *)((char *)&local_48 + 4)) + (uint)(uVar12 < (uint)local_48)),
                uVar13,uVar14);
  return CONCAT44((*(undefined4 *)((char *)&local_48 + 4)) + uVar14 + (uint)CARRY4((uint)local_48,uVar13),
                  (uint)local_48 + uVar13);
}

