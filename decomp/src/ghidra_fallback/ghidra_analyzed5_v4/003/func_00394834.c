#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00394BC4(int param_1,int param_2,uint *param_3);
extern int func_003C7A20(int *param_1,short *param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560E74(int *param_1,uint *param_2,uint *param_3);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_00561184(int param_1,uint *param_2,int param_3);
extern int func_0056128C(int param_1);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int *DAT_00394b40;
extern int *DAT_00394b44;
extern undefined4 DAT_00394b48;
extern undefined DAT_00394b54;
extern undefined DAT_00394b5c;
extern undefined4 DAT_00394b64;
extern undefined4 DAT_00394b68;
extern char s_uniqId_00394b4c[];

// USA 00394834 <- EU 00394810 (Ghidra, non-matching)
// GLOBAL DAT_00394b40 int *
// GLOBAL DAT_00394b44 int *
// GLOBAL DAT_00394b48 undefined4
// GLOBAL DAT_00394b54 undefined
// GLOBAL DAT_00394b5c undefined
// GLOBAL DAT_00394b64 undefined4
// GLOBAL DAT_00394b68 undefined4
// GLOBAL s_uniqId_00394b4c string

undefined4 func_00394834(int param_1,int param_2,uint *param_3)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(uint *)(albw_frame + 0x0))
  #define local_5c (*(uint *)(albw_frame + 0x4))
  #define local_58 ((float *)(albw_frame + 0x8))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define aiStack_40 ((int *)(albw_frame + 0x20))
  #define aiStack_38 ((int *)(albw_frame + 0x28))
  #define aiStack_30 ((int *)(albw_frame + 0x30))
  #define aiStack_28 ((int *)(albw_frame + 0x38))
  if (0 < *(int *)(param_2 + 0x3f4)) {
    uVar4 = func_00394BC4(param_1,param_2,param_3);
    return uVar4;
  }
  iVar5 = func_00582260(*DAT_00394b44,(int)*(char *)(*DAT_00394b40 + 0x18),
                        *(uint *)(*DAT_00394b40 + 0x1c));
  (**(code **)(*(int *)(iVar5 + 4) + 8))(iVar5 + 4);
  puVar10 = *(uint **)(iVar5 + 8);
  func_003C7A20(aiStack_28,*(short **)(*(int *)(param_1 + 0x224) + 0x14));
  func_003C7A70(aiStack_40);
  bVar3 = func_00560EF8(aiStack_28,aiStack_40,puVar10);
  uVar4 = DAT_00394b48;
  if (bVar3) {
    func_003C7A70(aiStack_38);
    iVar5 = 0;
    uVar6 = func_0056128C((int)aiStack_40);
    if (0 < (int)uVar6) {
      do {
        bVar3 = func_005610A8(aiStack_40,aiStack_38,iVar5);
        if ((((bVar3) &&
             (iVar7 = func_00560E74(aiStack_38,&local_60,(uint *)s_uniqId_00394b4c), iVar7 != 0)) &&
            ((int)*(short *)(param_2 + 0x70) == local_60)) &&
           (iVar7 = func_00560E74(aiStack_38,&local_5c,(uint *)&DAT_00394b54), iVar7 != 0)) {
          if (local_5c == 0) {
            func_003C7A70(aiStack_30);
            bVar3 = func_00560EF8(aiStack_38,aiStack_30,(uint *)&DAT_00394b5c);
            if (bVar3) {
              iVar5 = 0;
              do {
                func_00561184((int)aiStack_30,(uint *)(local_58 + iVar5),iVar5);
                iVar5 = iVar5 + 1;
              } while (iVar5 < 6);
              puVar8 = (undefined4 *)func_0010BAB4(0x28);
              if (puVar8 != (undefined4 *)0x0) {
                puVar8[1] = 0;
                *puVar8 = uVar4;
                puVar8[2] = local_60;
                puVar8[3] = 0;
                if (local_58[0] < local_58[3]) {
                  puVar8[4] = ALBW_AS_U32(local_58[0]);
                  puVar8[7] = ALBW_AS_U32(local_58[3]);
                }
                else {
                  puVar8[4] = ALBW_AS_U32(local_58[3]);
                  puVar8[7] = ALBW_AS_U32(local_58[0]);
                }
                if (local_58[1] < local_48) {
                  puVar8[5] = ALBW_AS_U32(local_58[1]);
                  puVar8[8] = ALBW_AS_U32(local_48);
                }
                else {
                  puVar8[5] = ALBW_AS_U32(local_48);
                  puVar8[8] = ALBW_AS_U32(local_58[1]);
                }
                if (local_58[2] < local_44) {
                  puVar8[6] = ALBW_AS_U32(local_58[2]);
                  puVar8[9] = ALBW_AS_U32(local_44);
                }
                else {
                  puVar8[6] = ALBW_AS_U32(local_44);
                  puVar8[9] = ALBW_AS_U32(local_58[2]);
                }
              }
              if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
                puVar9 = *(undefined4 **)(param_1 + 0x1c);
                if (puVar9 != (undefined4 *)0x0) {
                  *(undefined4 *)(param_1 + 0x1c) = *puVar9;
                  *puVar9 = 0;
                }
                if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
                  *(undefined4 **)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10) * 4) = puVar9
                  ;
                  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
                }
              }
              else {
                puVar9 = (undefined4 *)0x0;
              }
              *puVar9 = puVar8;
              if (puVar8 != (undefined4 *)0x0) {
                return puVar8;
              }
            }
          }
          break;
        }
        iVar5 = iVar5 + 1;
        uVar6 = func_0056128C((int)aiStack_40);
      } while (iVar5 < (int)uVar6);
    }
  }
  puVar8 = (undefined4 *)func_0010BAB4(0x28);
  uVar2 = DAT_00394b68;
  if (puVar8 != (undefined4 *)0x0) {
    sVar1 = *(short *)(param_2 + 0x70);
    puVar8[1] = 0;
    *puVar8 = uVar4;
    uVar4 = DAT_00394b64;
    puVar8[2] = (int)sVar1;
    puVar8[3] = 0;
    puVar8[4] = uVar2;
    puVar8[7] = uVar4;
    puVar8[5] = uVar2;
    puVar8[8] = uVar4;
    puVar8[6] = uVar2;
    puVar8[9] = uVar4;
  }
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
    puVar9 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar9 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = *puVar9;
      *puVar9 = 0;
    }
    if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
      *(undefined4 **)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10) * 4) = puVar9;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
  }
  else {
    puVar9 = (undefined4 *)0x0;
  }
  *puVar9 = puVar8;
  return puVar8;
}

