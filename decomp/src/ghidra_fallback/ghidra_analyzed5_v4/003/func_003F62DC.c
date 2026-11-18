#include "ghidra_types.h"

extern int func_003EA528(int param_1);
extern int func_003EDE3C(int param_1,uint *param_2);
extern int func_003F4E98(int param_1,int *param_2);
extern int DAT_003f6614;

// USA 003F62DC <- EU 003F62BC (Ghidra, non-matching)
// GLOBAL DAT_003f6614 int

void func_003F62DC(undefined4 param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  *(undefined4 *)(param_2 + 0x29c) = 0;
  puVar6 = *(uint **)(param_2 + 0xdc);
  bVar8 = (*(uint *)(*(int *)(param_2 + 0xd8) + 4) & 0x400) != 0;
  if (bVar8) {
    puVar6 = *(uint **)(param_2 + 0xe4);
  }
  if (puVar6 != (uint *)0x0) {
    if (bVar8) {
      do {
        if ((int)*puVar6 < (int)puVar6[1]) {
          func_003EDE3C(param_2,puVar6);
          func_003F4E98(param_2,(int *)puVar6);
          *(int *)(param_2 + 0x29c) = *(int *)(param_2 + 0x29c) + 1;
          puVar7 = (uint *)puVar6[0x4f];
        }
        else {
          uVar2 = puVar6[0x52];
          puVar7 = (uint *)puVar6[0x4f];
          if (uVar2 != 0) {
            uVar3 = puVar6[0x4e];
            uVar1 = *(ushort *)(DAT_003f6614 + uVar3);
            if (*(int *)(uVar2 + 4) != *(int *)(uVar2 + 8)) {
              iVar5 = *(int *)(uVar2 + 4) + 1;
              *(int *)(uVar2 + 4) = iVar5;
              if (*(int *)(uVar1 + uVar3 + 0x10) <= iVar5) {
                *(undefined4 *)(uVar2 + 4) = 0;
              }
              *(int *)(uVar2 + 0x580c) = *(int *)(uVar2 + 0x580c) + -1;
              uVar4 = puVar6[0x51];
              uVar9 = *(undefined4 *)(uVar4 + 0x58);
              uVar10 = *(undefined4 *)(uVar4 + 0x5c);
              uVar11 = *(undefined4 *)(uVar4 + 0x60);
              uVar12 = *(undefined4 *)(uVar4 + 100);
              uVar13 = *(undefined4 *)(uVar4 + 0x68);
              uVar14 = *(undefined4 *)(uVar4 + 0x6c);
              uVar15 = *(undefined4 *)(uVar4 + 0x70);
              *(undefined4 *)(uVar2 + 0x581c) = *(undefined4 *)(uVar4 + 0x54);
              *(undefined4 *)(uVar2 + 0x5820) = uVar9;
              *(undefined4 *)(uVar2 + 0x5824) = uVar10;
              *(undefined4 *)(uVar2 + 0x5828) = uVar11;
              *(undefined4 *)(uVar2 + 0x582c) = uVar12;
              *(undefined4 *)(uVar2 + 0x5830) = uVar13;
              *(undefined4 *)(uVar2 + 0x5834) = uVar14;
              *(undefined4 *)(uVar2 + 0x5838) = uVar15;
              uVar9 = *(undefined4 *)(uVar4 + 0x78);
              uVar10 = *(undefined4 *)(uVar4 + 0x7c);
              uVar11 = *(undefined4 *)(uVar4 + 0x80);
              *(undefined4 *)(uVar2 + 0x583c) = *(undefined4 *)(uVar4 + 0x74);
              *(undefined4 *)(uVar2 + 0x5840) = uVar9;
              *(undefined4 *)(uVar2 + 0x5844) = uVar10;
              *(undefined4 *)(uVar2 + 0x5848) = uVar11;
              puVar6[0x1f] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x1f]) + *(float *)(uVar3 + 0x374)));
              puVar6[0x20] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x20]) + *(float *)(uVar3 + 0x378)));
              puVar6[0x21] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x21]) + *(float *)(uVar3 + 0x38c)));
              puVar6[0x22] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x22]) + *(float *)(uVar3 + 0x390)));
              puVar6[0x1c] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x1c]) + *(float *)(uVar3 + 0x3a4)));
              puVar6[0x26] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x26]) + *(float *)(uVar3 + 0x3ec)));
              puVar6[0x27] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x27]) + *(float *)(uVar3 + 0x3f0)));
              puVar6[0x28] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x28]) + *(float *)(uVar3 + 0x404)));
              puVar6[0x29] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x29]) + *(float *)(uVar3 + 0x408)));
              puVar6[0x23] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x23]) + *(float *)(uVar3 + 0x41c)));
              *(int *)(uVar2 + 0x5818) = *(int *)(uVar2 + 0x5818) + 1;
              goto LAB_003f6608;
            }
          }
          func_003EA528((int)puVar6);
        }
LAB_003f6608:
        puVar6 = puVar7;
        if (puVar7 == (uint *)0x0) {
          return;
        }
      } while( true );
    }
    do {
      if ((int)*puVar6 < (int)puVar6[1]) {
        func_003EDE3C(param_2,puVar6);
        func_003F4E98(param_2,(int *)puVar6);
        *(int *)(param_2 + 0x29c) = *(int *)(param_2 + 0x29c) + 1;
        puVar7 = (uint *)puVar6[0x50];
      }
      else {
        uVar2 = puVar6[0x52];
        puVar7 = (uint *)puVar6[0x50];
        if (uVar2 != 0) {
          uVar3 = puVar6[0x4e];
          uVar1 = *(ushort *)(DAT_003f6614 + uVar3);
          if (*(int *)(uVar2 + 4) != *(int *)(uVar2 + 8)) {
            iVar5 = *(int *)(uVar2 + 4) + 1;
            *(int *)(uVar2 + 4) = iVar5;
            if (*(int *)(uVar1 + uVar3 + 0x10) <= iVar5) {
              *(undefined4 *)(uVar2 + 4) = 0;
            }
            *(int *)(uVar2 + 0x580c) = *(int *)(uVar2 + 0x580c) + -1;
            uVar4 = puVar6[0x51];
            uVar9 = *(undefined4 *)(uVar4 + 0x58);
            uVar10 = *(undefined4 *)(uVar4 + 0x5c);
            uVar11 = *(undefined4 *)(uVar4 + 0x60);
            uVar12 = *(undefined4 *)(uVar4 + 100);
            uVar13 = *(undefined4 *)(uVar4 + 0x68);
            uVar14 = *(undefined4 *)(uVar4 + 0x6c);
            uVar15 = *(undefined4 *)(uVar4 + 0x70);
            *(undefined4 *)(uVar2 + 0x581c) = *(undefined4 *)(uVar4 + 0x54);
            *(undefined4 *)(uVar2 + 0x5820) = uVar9;
            *(undefined4 *)(uVar2 + 0x5824) = uVar10;
            *(undefined4 *)(uVar2 + 0x5828) = uVar11;
            *(undefined4 *)(uVar2 + 0x582c) = uVar12;
            *(undefined4 *)(uVar2 + 0x5830) = uVar13;
            *(undefined4 *)(uVar2 + 0x5834) = uVar14;
            *(undefined4 *)(uVar2 + 0x5838) = uVar15;
            uVar9 = *(undefined4 *)(uVar4 + 0x78);
            uVar10 = *(undefined4 *)(uVar4 + 0x7c);
            uVar11 = *(undefined4 *)(uVar4 + 0x80);
            *(undefined4 *)(uVar2 + 0x583c) = *(undefined4 *)(uVar4 + 0x74);
            *(undefined4 *)(uVar2 + 0x5840) = uVar9;
            *(undefined4 *)(uVar2 + 0x5844) = uVar10;
            *(undefined4 *)(uVar2 + 0x5848) = uVar11;
            puVar6[0x1f] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x1f]) + *(float *)(uVar3 + 0x374)));
            puVar6[0x20] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x20]) + *(float *)(uVar3 + 0x378)));
            puVar6[0x21] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x21]) + *(float *)(uVar3 + 0x38c)));
            puVar6[0x22] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x22]) + *(float *)(uVar3 + 0x390)));
            puVar6[0x1c] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x1c]) + *(float *)(uVar3 + 0x3a4)));
            puVar6[0x26] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x26]) + *(float *)(uVar3 + 0x3ec)));
            puVar6[0x27] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x27]) + *(float *)(uVar3 + 0x3f0)));
            puVar6[0x28] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x28]) + *(float *)(uVar3 + 0x404)));
            puVar6[0x29] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x29]) + *(float *)(uVar3 + 0x408)));
            puVar6[0x23] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar6[0x23]) + *(float *)(uVar3 + 0x41c)));
            *(int *)(uVar2 + 0x5818) = *(int *)(uVar2 + 0x5818) + 1;
            goto LAB_003f647c;
          }
        }
        func_003EA528((int)puVar6);
      }
LAB_003f647c:
      puVar6 = puVar7;
    } while (puVar7 != (uint *)0x0);
  }
  return;
}

