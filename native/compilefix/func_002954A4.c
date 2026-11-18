/* compilefix: USA 002954A4, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_002954A4.c): two FixedSafeString objects on the stack
 * (vtable local_bc / local_90, then buffer and size) call their virtual +8 (assureTerminated, 00691BD0)
 * without `this`; restored as in 004D1630 (BOOT_LOG 159, lost `this` on a stack object). */
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00258038(int param_1,uint param_2,undefined4 param_3,float fparam_0);
extern int func_00294404(int param_1,int *param_2,int param_3,int *param_4,int param_5);
extern int func_00296BF0(int param_1,undefined4 param_2);
extern int func_00297140(int param_1,int *param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_00540654(int param_1,int *param_2);
extern int func_00540A78(int param_1,int *param_2);
extern int func_00569A3C(int param_1,uint param_2,undefined2 *param_3);
extern undefined4 *DAT_002958f8;
extern undefined1 *DAT_002958fc;
extern int *DAT_00295900;
extern float DAT_00295904;
extern float DAT_00295908;
extern undefined *DAT_0029590c;
extern int *DAT_00295910;
extern int DAT_00295914;
extern undefined1 DAT_00295918;

// USA 002954A4 <- EU 002954CC (Ghidra, non-matching)
// GLOBAL DAT_002958f8 undefined4 *
// GLOBAL DAT_002958fc undefined1 *
// GLOBAL DAT_00295900 int *
// GLOBAL DAT_00295904 float
// GLOBAL DAT_00295908 float
// GLOBAL DAT_0029590c undefined *
// GLOBAL DAT_00295910 int *
// GLOBAL DAT_00295914 int
// GLOBAL DAT_00295918 undefined1

void func_002954A4(int param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0xc0]; /* entry_sp - 0xc0 .. entry_sp + 0x0 */
#define stack0xffffff40 (*(undefined4 *)(albw_frame + 0x0))
  bool bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 extraout_r1;
  undefined4 uVar9;
  uint uVar10;
  undefined1 **ppuVar11;
  int iVar12;
  float fparam_0;
  float fparam_0_00;
  #define local_bc (*(int *)(albw_frame + 0x4))
  #define local_b8 (*(undefined1 * *)(albw_frame + 0x8))
  #define local_b4 (*(int *)(albw_frame + 0xc))
  #define local_b0 ((undefined1 *)(albw_frame + 0x10))
  #define uStack_91 (*(undefined1 *)(albw_frame + 0x2f))
  #define local_90 (*(int *)(albw_frame + 0x30))
  #define local_8c (*(undefined1 * *)(albw_frame + 0x34))
  #define local_88 (*(int *)(albw_frame + 0x38))
  #define local_84 ((undefined1 *)(albw_frame + 0x3c))
  #define uStack_65 (*(undefined1 *)(albw_frame + 0x5b))
  #define local_60 (*(undefined1 * *)(albw_frame + 0x60))
  #define local_5c (*(uint * *)(albw_frame + 0x64))
  #define local_58 (*(undefined1 * *)(albw_frame + 0x68))
  #define local_54 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_50 (*(undefined1 * *)(albw_frame + 0x70))
  #define local_4c (*(undefined4 *)(albw_frame + 0x74))
  #define local_48 (*(undefined1 * *)(albw_frame + 0x78))
  #define local_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_40 (*(undefined1 * *)(albw_frame + 0x80))
  #define local_3c (*(undefined4 *)(albw_frame + 0x84))
  #define local_38 (*(undefined1 * *)(albw_frame + 0x88))
  #define local_34 (*(undefined4 *)(albw_frame + 0x8c))
  puVar3 = DAT_002958fc;
  puVar2 = DAT_002958f8;
  if (2 < param_2) {
    return;
  }
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    return;
  }
  if ((*(uint *)(param_1 + 0x128) & 0x20) != 0) {
    return;
  }
  if (param_2 < 0) {
    return;
  }
  local_54 = *DAT_002958f8;
  local_58 = DAT_002958fc;
  iVar6 = func_00540A78(param_1,(int *)&local_58);
  if (iVar6 == 0) {
    local_4c = puVar2[1];
    local_50 = puVar3;
    iVar6 = func_00540654(param_1,(int *)&local_50);
    if ((iVar6 != 0) && (param_2 == 0)) goto LAB_00295650;
    bVar1 = false;
  }
  else {
LAB_00295650:
    bVar1 = true;
  }
  piVar4 = DAT_00295900;
  if (bVar1) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      iVar12 = *(int *)(param_1 + 0x20);
      fparam_0 = DAT_00295904;
      fparam_0_00 = DAT_00295908;
      for (iVar6 = *(int *)(param_1 + 0x18) - iVar12; iVar6 != (param_1 + 0x14) - iVar12;
          iVar6 = *(int *)(iVar6 + iVar12 + 4) - iVar12) {
        uVar10 = 0;
        iVar7 = func_00100118((int)&local_bc,DAT_0029590c,0xd,4);
        *(float *)(iVar7 + 0x34) = fparam_0;
        *(undefined1 *)(iVar7 + 0x38) = 0x7f;
        *(undefined1 *)(iVar7 + 0x3b) = 0;
        *(undefined2 *)(iVar7 + 0x39) = 0;
        iVar7 = *(int *)(iVar6 + 0xc);
        uVar9 = extraout_r1;
        if (iVar7 != 0) {
          uVar9 = *(undefined4 *)(iVar7 + 0xac);
        }
        if (iVar7 == 0) {
          uVar9 = 0xffffffff;
        }
        iVar7 = func_00569A3C(*piVar4,uVar9,&stack0xffffff40);
        if ((iVar7 != 0) && ((uVar10 & 2) != 0)) {
          func_00258038(iVar6,1,0x1e,fparam_0_00);
          func_00258038(iVar6,2,0x1e,fparam_0);
          *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 0x40;
        }
      }
    }
    goto LAB_002959f4;
  }
  local_44 = puVar2[9];
  local_48 = puVar3;
  iVar6 = func_00540A78(param_1,(int *)&local_48);
  if (iVar6 == 0) {
    local_3c = puVar2[10];
    local_40 = puVar3;
    iVar6 = func_00540A78(param_1,(int *)&local_40);
    bVar1 = false;
    if (iVar6 != 0) goto LAB_002956a0;
  }
  else {
LAB_002956a0:
    bVar1 = true;
  }
  if (!bVar1) {
    if ((int)*(char *)(*DAT_00295910 + 0x18) - 0x18U < 3) {
      local_b4 = puVar2[9];
      local_b8 = puVar3;
      func_00294404(param_1,(int *)&local_b8,10,(int *)0x0,1);
    }
    else {
      local_34 = puVar2[1];
      local_38 = puVar3;
      iVar6 = func_00540654(param_1,(int *)&local_38);
      if (iVar6 == 0) {
        local_b8 = local_b0;
        local_b4 = 0x20;
        ppuVar11 = &local_8c;
        uStack_91 = 0;
        uVar10 = 0x20;
        local_8c = local_84;
        local_b0[0] = 0;
        local_bc = DAT_00295914;
        local_88 = 0x20;
        uStack_65 = 0;
        local_84[0] = 0;
        local_90 = DAT_00295914;
        func_004994B0((int)&local_bc,puVar2[3],0x20,ppuVar11);
        func_004994B0((int)&local_90,puVar2[4],uVar10,ppuVar11);
        puVar5 = local_b8;
        if (1 < param_2) {
          local_5c = (uint *)&DAT_00295918;
          local_60 = puVar3;
          (**(code **)(local_bc + 8))(&local_bc);   /* this restored */
          iVar6 = 0;
          do {
            if (local_b8[iVar6] == '\0') {
              if (iVar6 < 0x40001) goto LAB_00295814;
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 0x40001);
          iVar6 = 0;
LAB_00295814:
          iVar12 = iVar6;
          if (iVar6 < 0) {
            iVar12 = 0;
          }
          (**(code **)(local_60 + 8))(&local_60);
          uVar10 = 0;
          do {
            if (*(char *)((int)local_5c + uVar10) == '\0') {
              if ((int)uVar10 < 0x40001) goto LAB_00295864;
              break;
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < 0x40001);
          uVar10 = 0;
LAB_00295864:
          if (local_b4 - iVar12 <= (int)uVar10) {
            uVar10 = (local_b4 - iVar12) - 1;
          }
          if (0 < (int)uVar10) {
            puVar8 = (uint *)(puVar5 + iVar12);
            (**(code **)(local_60 + 8))(&local_60);
            func_0010E3C4(puVar8,local_5c,uVar10);
            if (iVar6 < (int)(iVar12 + uVar10)) {
              puVar5[iVar12 + uVar10] = 0;
            }
          }
          puVar5 = local_8c;
          local_60 = puVar3;
          local_5c = (uint *)&DAT_00295918;
          (**(code **)(local_90 + 8))(&local_90);   /* this restored */
          iVar6 = 0;
          do {
            if (local_8c[iVar6] == '\0') {
              if (iVar6 < 0x40001) goto LAB_00295928;
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 0x40001);
          iVar6 = 0;
LAB_00295928:
          iVar12 = iVar6;
          if (iVar6 < 0) {
            iVar12 = 0;
          }
          (**(code **)(local_60 + 8))(&local_60);
          uVar10 = 0;
          do {
            if (*(char *)((int)local_5c + uVar10) == '\0') {
              if ((int)uVar10 < 0x40001) goto LAB_00295978;
              break;
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < 0x40001);
          uVar10 = 0;
LAB_00295978:
          if (local_88 - iVar12 <= (int)uVar10) {
            uVar10 = (local_88 - iVar12) - 1;
          }
          if (0 < (int)uVar10) {
            (**(code **)(local_60 + 8))(&local_60);
            func_0010E3C4((uint *)(puVar5 + iVar12),local_5c,uVar10);
            if (iVar6 < (int)(iVar12 + uVar10)) {
              puVar5[iVar12 + uVar10] = 0;
            }
          }
        }
        func_00296BF0(param_1,0xf);
        func_00294404(param_1,&local_bc,10,(int *)0x0,1);
        func_00297140(param_1,&local_90);
      }
      else {
        func_00296BF0(param_1,0xf);
        local_b4 = puVar2[5];
        local_b8 = puVar3;
        func_00294404(param_1,(int *)&local_b8,10,(int *)0x0,1);
      }
    }
  }
LAB_002959f4:
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 0x20;
  return;
}

