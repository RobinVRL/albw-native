#include "ghidra_types.h"

extern int func_003EA528(int param_1);
extern int func_003EDE3C(int param_1,uint *param_2);
extern undefined8 func_003EF244(int param_1);
extern int func_003F0080(int param_1,uint *param_2,int param_3,int param_4);
extern int func_003F0A54(uint *param_1);
extern int func_003F11EC(int param_1);
extern int func_003F17EC(int param_1);
extern undefined8 func_003F1AB8(int param_1,uint *param_2,int param_3);
extern int func_003F23C4(int param_1,uint *param_2,int *param_3);
extern int func_003F4E98(int param_1,int *param_2);
extern int DAT_003f570c;
extern int DAT_003f5710;

// USA 003F5498 <- EU 003F5478 (Ghidra, non-matching)
// GLOBAL DAT_003f570c int
// GLOBAL DAT_003f5710 int

uint * func_003F5498(int param_1,uint *param_2,int *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  
  param_3[0xa7] = 0;
  puVar8 = (uint *)param_3[0x37];
  func_003F11EC(param_1 + 4);
  iVar10 = param_3[0x36];
  if (puVar8 != (uint *)0x0) {
    iVar3 = func_003F0080(param_1 + 4,param_2,(int)param_3,0);
    iVar2 = DAT_003f570c;
    if (param_4 == 0) {
      do {
        if ((int)*puVar8 < (int)puVar8[1]) {
          if (iVar3 < 0) {
            func_003EDE3C((int)param_3,puVar8);
          }
          else {
            func_003F0A54(puVar8);
            (**(code **)(iVar2 + iVar3 * 4))(puVar8);
          }
          func_003F4E98((int)param_3,(int *)puVar8);
          param_3[0xa7] = param_3[0xa7] + 1;
          puVar9 = (uint *)puVar8[0x50];
        }
        else {
          uVar4 = puVar8[0x52];
          puVar9 = (uint *)puVar8[0x50];
          if (uVar4 != 0) {
            uVar5 = puVar8[0x4e];
            uVar1 = *(ushort *)(DAT_003f5710 + uVar5);
            if (*(int *)(uVar4 + 4) != *(int *)(uVar4 + 8)) {
              iVar6 = *(int *)(uVar4 + 4) + 1;
              *(int *)(uVar4 + 4) = iVar6;
              if (*(int *)(uVar1 + uVar5 + 0x10) <= iVar6) {
                *(undefined4 *)(uVar4 + 4) = 0;
              }
              *(int *)(uVar4 + 0x580c) = *(int *)(uVar4 + 0x580c) + -1;
              uVar7 = puVar8[0x51];
              uVar11 = *(undefined4 *)(uVar7 + 0x58);
              uVar12 = *(undefined4 *)(uVar7 + 0x5c);
              uVar13 = *(undefined4 *)(uVar7 + 0x60);
              uVar14 = *(undefined4 *)(uVar7 + 100);
              uVar15 = *(undefined4 *)(uVar7 + 0x68);
              uVar16 = *(undefined4 *)(uVar7 + 0x6c);
              uVar17 = *(undefined4 *)(uVar7 + 0x70);
              *(undefined4 *)(uVar4 + 0x581c) = *(undefined4 *)(uVar7 + 0x54);
              *(undefined4 *)(uVar4 + 0x5820) = uVar11;
              *(undefined4 *)(uVar4 + 0x5824) = uVar12;
              *(undefined4 *)(uVar4 + 0x5828) = uVar13;
              *(undefined4 *)(uVar4 + 0x582c) = uVar14;
              *(undefined4 *)(uVar4 + 0x5830) = uVar15;
              *(undefined4 *)(uVar4 + 0x5834) = uVar16;
              *(undefined4 *)(uVar4 + 0x5838) = uVar17;
              uVar11 = *(undefined4 *)(uVar7 + 0x78);
              uVar12 = *(undefined4 *)(uVar7 + 0x7c);
              uVar13 = *(undefined4 *)(uVar7 + 0x80);
              *(undefined4 *)(uVar4 + 0x583c) = *(undefined4 *)(uVar7 + 0x74);
              *(undefined4 *)(uVar4 + 0x5840) = uVar11;
              *(undefined4 *)(uVar4 + 0x5844) = uVar12;
              *(undefined4 *)(uVar4 + 0x5848) = uVar13;
              puVar8[0x1f] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar8[0x1f]) + *(float *)(uVar5 + 0x374)));
              puVar8[0x20] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar8[0x20]) + *(float *)(uVar5 + 0x378)));
              puVar8[0x21] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar8[0x21]) + *(float *)(uVar5 + 0x38c)));
              puVar8[0x22] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar8[0x22]) + *(float *)(uVar5 + 0x390)));
              puVar8[0x1c] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar8[0x1c]) + *(float *)(uVar5 + 0x3a4)));
              puVar8[0x26] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar8[0x26]) + *(float *)(uVar5 + 0x3ec)));
              puVar8[0x27] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar8[0x27]) + *(float *)(uVar5 + 0x3f0)));
              puVar8[0x28] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar8[0x28]) + *(float *)(uVar5 + 0x404)));
              puVar8[0x29] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar8[0x29]) + *(float *)(uVar5 + 0x408)));
              puVar8[0x23] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar8[0x23]) + *(float *)(uVar5 + 0x41c)));
              *(int *)(uVar4 + 0x5818) = *(int *)(uVar4 + 0x5818) + 1;
              goto LAB_003f5678;
            }
          }
          func_003EA528((int)puVar8);
        }
LAB_003f5678:
        puVar8 = puVar9;
      } while (puVar9 != (uint *)0x0);
    }
    else {
      do {
        if (iVar3 < 0) break;
        func_003F17EC((int)puVar8);
        (**(code **)(iVar2 + iVar3 * 4))(puVar8);
        param_3[0xa7] = param_3[0xa7] + 1;
        puVar8 = (uint *)puVar8[0x50];
      } while (puVar8 != (uint *)0x0);
    }
    uVar18 = func_003EF244(param_1 + 4);
    param_2 = (uint *)uVar18;
    if (param_3[3] != 0) {
      if (*(int *)(iVar10 + 0x328) == 5) {
        uVar18 = func_003F1AB8(param_1 + 4,param_2,(int)param_3);
        param_2 = (uint *)uVar18;
      }
      if (*(int *)(iVar10 + 0x328) == 6) {
        puVar8 = func_003F23C4(param_1 + 4,param_2,param_3);
        return puVar8;
      }
    }
  }
  return param_2;
}

