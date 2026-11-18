/* compilefix: USA 0029549C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_0029549C.c): two FixedSafeString objects on the stack
 * (vtable iStack_bc / iStack_90, then buffer and size) call their virtual +8 (assureTerminated, 00691BD0)
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

// USA 0029549C <- EU 002954C4 (Ghidra, non-matching)
// GLOBAL DAT_002958f8 undefined4 *
// GLOBAL DAT_002958fc undefined1 *
// GLOBAL DAT_00295900 int *
// GLOBAL DAT_00295904 float
// GLOBAL DAT_00295908 float
// GLOBAL DAT_0029590c undefined *
// GLOBAL DAT_00295910 int *
// GLOBAL DAT_00295914 int
// GLOBAL DAT_00295918 undefined1

void func_0029549C(int param_1,int param_2)

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
  int iVar8;
  uint *puVar9;
  undefined4 extraout_r1;
  undefined4 uVar10;
  uint uVar11;
  undefined1 **ppuVar12;
  int iVar13;
  float fparam_0;
  float fparam_0_00;
  #define iStack_bc (*(int *)(albw_frame + 0x4))
  #define puStack_b8 (*(undefined1 * *)(albw_frame + 0x8))
  #define iStack_b4 (*(int *)(albw_frame + 0xc))
  #define auStack_b0 ((undefined1 *)(albw_frame + 0x10))
  #define uStack_91 (*(undefined1 *)(albw_frame + 0x2f))
  #define iStack_90 (*(int *)(albw_frame + 0x30))
  #define puStack_8c (*(undefined1 * *)(albw_frame + 0x34))
  #define iStack_88 (*(int *)(albw_frame + 0x38))
  #define auStack_84 ((undefined1 *)(albw_frame + 0x3c))
  #define uStack_65 (*(undefined1 *)(albw_frame + 0x5b))
  #define puStack_60 (*(undefined1 * *)(albw_frame + 0x60))
  #define puStack_5c (*(uint * *)(albw_frame + 0x64))
  #define puStack_58 (*(undefined1 * *)(albw_frame + 0x68))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x6c))
  #define puStack_50 (*(undefined1 * *)(albw_frame + 0x70))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x74))
  #define puStack_48 (*(undefined1 * *)(albw_frame + 0x78))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define puStack_40 (*(undefined1 * *)(albw_frame + 0x80))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x84))
  #define puStack_38 (*(undefined1 * *)(albw_frame + 0x88))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x8c))
  puVar3 = DAT_002958fc;
  puVar2 = DAT_002958f8;
  iVar6 = *(int *)(param_1 + 0x4c);
  if (2 < param_2) {
    return;
  }
  if (*(char *)(iVar6 + 0x1a4) == '\0') {
    return;
  }
  if ((*(uint *)(iVar6 + 0x128) & 0x20) != 0) {
    return;
  }
  if (param_2 < 0) {
    return;
  }
  uStack_54 = *DAT_002958f8;
  puStack_58 = DAT_002958fc;
  iVar7 = func_00540A78(iVar6,(int *)&puStack_58);
  if (iVar7 == 0) {
    uStack_4c = puVar2[1];
    puStack_50 = puVar3;
    iVar7 = func_00540654(iVar6,(int *)&puStack_50);
    if ((iVar7 != 0) && (param_2 == 0)) goto LAB_00295650;
    bVar1 = false;
  }
  else {
LAB_00295650:
    bVar1 = true;
  }
  piVar4 = DAT_00295900;
  if (bVar1) {
    if (*(int *)(iVar6 + 0x1c) != 0) {
      iVar13 = *(int *)(iVar6 + 0x20);
      fparam_0 = DAT_00295904;
      fparam_0_00 = DAT_00295908;
      for (iVar7 = *(int *)(iVar6 + 0x18) - iVar13; iVar7 != (iVar6 + 0x14) - iVar13;
          iVar7 = *(int *)(iVar7 + iVar13 + 4) - iVar13) {
        uVar11 = 0;
        iVar8 = func_00100118((int)&iStack_bc,DAT_0029590c,0xd,4);
        *(float *)(iVar8 + 0x34) = fparam_0;
        *(undefined1 *)(iVar8 + 0x38) = 0x7f;
        *(undefined1 *)(iVar8 + 0x3b) = 0;
        *(undefined2 *)(iVar8 + 0x39) = 0;
        iVar8 = *(int *)(iVar7 + 0xc);
        uVar10 = extraout_r1;
        if (iVar8 != 0) {
          uVar10 = *(undefined4 *)(iVar8 + 0xac);
        }
        if (iVar8 == 0) {
          uVar10 = 0xffffffff;
        }
        iVar8 = func_00569A3C(*piVar4,uVar10,&stack0xffffff40);
        if ((iVar8 != 0) && ((uVar11 & 2) != 0)) {
          func_00258038(iVar7,1,0x1e,fparam_0_00);
          func_00258038(iVar7,2,0x1e,fparam_0);
          *(uint *)(iVar6 + 0x128) = *(uint *)(iVar6 + 0x128) | 0x40;
        }
      }
    }
    goto LAB_002959f4;
  }
  uStack_44 = puVar2[9];
  puStack_48 = puVar3;
  iVar7 = func_00540A78(iVar6,(int *)&puStack_48);
  if (iVar7 == 0) {
    uStack_3c = puVar2[10];
    puStack_40 = puVar3;
    iVar7 = func_00540A78(iVar6,(int *)&puStack_40);
    bVar1 = false;
    if (iVar7 != 0) goto LAB_002956a0;
  }
  else {
LAB_002956a0:
    bVar1 = true;
  }
  if (!bVar1) {
    if ((int)*(char *)(*DAT_00295910 + 0x18) - 0x18U < 3) {
      iStack_b4 = puVar2[9];
      puStack_b8 = puVar3;
      func_00294404(iVar6,(int *)&puStack_b8,10,(int *)0x0,1);
    }
    else {
      uStack_34 = puVar2[1];
      puStack_38 = puVar3;
      iVar7 = func_00540654(iVar6,(int *)&puStack_38);
      if (iVar7 == 0) {
        puStack_b8 = auStack_b0;
        iStack_b4 = 0x20;
        ppuVar12 = &puStack_8c;
        uStack_91 = 0;
        uVar11 = 0x20;
        puStack_8c = auStack_84;
        auStack_b0[0] = 0;
        iStack_bc = DAT_00295914;
        iStack_88 = 0x20;
        uStack_65 = 0;
        auStack_84[0] = 0;
        iStack_90 = DAT_00295914;
        func_004994B0((int)&iStack_bc,puVar2[3],0x20,ppuVar12);
        func_004994B0((int)&iStack_90,puVar2[4],uVar11,ppuVar12);
        puVar5 = puStack_b8;
        if (1 < param_2) {
          puStack_5c = (uint *)&DAT_00295918;
          puStack_60 = puVar3;
          (**(code **)(iStack_bc + 8))(&iStack_bc);   /* this restored */
          iVar7 = 0;
          do {
            if (puStack_b8[iVar7] == '\0') {
              if (iVar7 < 0x40001) goto LAB_00295814;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 0x40001);
          iVar7 = 0;
LAB_00295814:
          iVar13 = iVar7;
          if (iVar7 < 0) {
            iVar13 = 0;
          }
          (**(code **)(puStack_60 + 8))(&puStack_60);
          uVar11 = 0;
          do {
            if (*(char *)((int)puStack_5c + uVar11) == '\0') {
              if ((int)uVar11 < 0x40001) goto LAB_00295864;
              break;
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < 0x40001);
          uVar11 = 0;
LAB_00295864:
          if (iStack_b4 - iVar13 <= (int)uVar11) {
            uVar11 = (iStack_b4 - iVar13) - 1;
          }
          if (0 < (int)uVar11) {
            puVar9 = (uint *)(puVar5 + iVar13);
            (**(code **)(puStack_60 + 8))(&puStack_60);
            func_0010E3C4(puVar9,puStack_5c,uVar11);
            if (iVar7 < (int)(iVar13 + uVar11)) {
              puVar5[iVar13 + uVar11] = 0;
            }
          }
          puVar5 = puStack_8c;
          puStack_60 = puVar3;
          puStack_5c = (uint *)&DAT_00295918;
          (**(code **)(iStack_90 + 8))(&iStack_90);   /* this restored */
          iVar7 = 0;
          do {
            if (puStack_8c[iVar7] == '\0') {
              if (iVar7 < 0x40001) goto LAB_00295928;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 0x40001);
          iVar7 = 0;
LAB_00295928:
          iVar13 = iVar7;
          if (iVar7 < 0) {
            iVar13 = 0;
          }
          (**(code **)(puStack_60 + 8))(&puStack_60);
          uVar11 = 0;
          do {
            if (*(char *)((int)puStack_5c + uVar11) == '\0') {
              if ((int)uVar11 < 0x40001) goto LAB_00295978;
              break;
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < 0x40001);
          uVar11 = 0;
LAB_00295978:
          if (iStack_88 - iVar13 <= (int)uVar11) {
            uVar11 = (iStack_88 - iVar13) - 1;
          }
          if (0 < (int)uVar11) {
            (**(code **)(puStack_60 + 8))(&puStack_60);
            func_0010E3C4((uint *)(puVar5 + iVar13),puStack_5c,uVar11);
            if (iVar7 < (int)(iVar13 + uVar11)) {
              puVar5[iVar13 + uVar11] = 0;
            }
          }
        }
        func_00296BF0(iVar6,0xf);
        func_00294404(iVar6,&iStack_bc,10,(int *)0x0,1);
        func_00297140(iVar6,&iStack_90);
      }
      else {
        func_00296BF0(iVar6,0xf);
        iStack_b4 = puVar2[5];
        puStack_b8 = puVar3;
        func_00294404(iVar6,(int *)&puStack_b8,10,(int *)0x0,1);
      }
    }
  }
LAB_002959f4:
  *(uint *)(iVar6 + 0x128) = *(uint *)(iVar6 + 0x128) | 0x20;
  return;
}

