#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00270B6C(int *param_1,int *param_2,undefined4 param_3,uint *param_4);
extern int func_00270BF8(undefined4 *param_1);
extern int func_00270C14(int *param_1,int param_2,int *param_3,undefined4 param_4);
extern uint *DAT_0039ad94;
extern int *DAT_0039ad98;
extern int DAT_0039ad9c;
extern undefined1 DAT_0039ada0;
extern undefined DAT_0039adc0;
extern undefined4 DAT_0039adc4;
extern undefined4 DAT_0039adc8;
extern char s_L0_K1_0039ada8[];
extern char s_L1_K0_0039adb0[];
extern char s_L1_K1_0039adb8[];

// USA 0039ABB8 <- EU 0039AB94 (Ghidra, non-matching)
// GLOBAL DAT_0039ad94 uint *
// GLOBAL DAT_0039ad98 int *
// GLOBAL DAT_0039ad9c int
// GLOBAL DAT_0039ada0 undefined1
// GLOBAL DAT_0039adc0 undefined
// GLOBAL DAT_0039adc4 undefined4
// GLOBAL DAT_0039adc8 undefined4
// GLOBAL s_L0_K1_0039ada8 string
// GLOBAL s_L1_K0_0039adb0 string
// GLOBAL s_L1_K1_0039adb8 string

int func_0039ABB8(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(int *)(albw_frame + 0x4))
  #define iStack_34 (*(int *)(albw_frame + 0xc))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(int * *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  func_00270C14((int *)(param_1 + 0xa4),param_2,param_3,param_4);
  iVar2 = DAT_0039ad9c;
  piVar7 = DAT_0039ad98;
  if (((*DAT_0039ad94 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0039ad94), iVar3 != 0)) {
    piVar7[1] = (int)&DAT_0039ada0;
    *piVar7 = iVar2;
    piVar7[3] = (int)s_L0_K1_0039ada8;
    piVar7[2] = iVar2;
    piVar7[5] = (int)s_L1_K0_0039adb0;
    piVar7[4] = iVar2;
    piVar7[7] = (int)s_L1_K1_0039adb8;
    piVar7[6] = iVar2;
    piVar7[8] = iVar2;
    piVar7[9] = (int)&DAT_0039adc0;
  }
  *(undefined1 *)(param_1 + 0x14c) = 0xff;
  *(undefined1 *)(param_1 + 0x14d) = 0xff;
  *(undefined1 *)(param_1 + 0x14e) = 0xff;
  *(undefined1 *)(param_1 + 0x14f) = 0xff;
  uVar9 = 0;
  *(undefined1 *)(param_1 + 0x150) = 0xff;
  do {
    uVar8 = 0;
    if (0 < *(int *)(param_1 + 0xa4)) {
      piVar7 = DAT_0039ad98 + uVar9 * 2;
      do {
        if (uVar8 < *(uint *)(param_1 + 0xa4)) {
          piVar4 = *(int **)(*(int *)(param_1 + 0xac) + uVar8 * 4);
        }
        else {
          piVar4 = (int *)0x0;
        }
        local_3c = *piVar4;
        local_40 = iVar2;
        (**(code **)(*piVar7 + 8))(piVar7);
        (**(code **)(*piVar7 + 8))(piVar7);
        iVar3 = piVar7[1];
        (**(code **)(local_40 + 8))(&local_40);
        bVar1 = true;
        if (iVar3 != local_3c) {
          iVar3 = 0;
          do {
            if (*(char *)(piVar7[1] + iVar3) != *(char *)(local_3c + iVar3)) break;
            if (*(char *)(piVar7[1] + iVar3) == '\0') goto LAB_0039acfc;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x40001);
          bVar1 = false;
        }
LAB_0039acfc:
        if (bVar1) {
          puVar5 = (undefined1 *)(param_1 + 0x14c);
          if (uVar9 < 5) {
            puVar5 = puVar5 + uVar9;
          }
          *puVar5 = (char)uVar8;
          goto LAB_0039ad44;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < *(int *)(param_1 + 0xa4));
    }
    puVar5 = (undefined1 *)(param_1 + 0x14c);
    if (uVar9 < 5) {
      puVar5 = puVar5 + uVar9;
    }
    *puVar5 = 0;
LAB_0039ad44:
    uVar9 = uVar9 + 1;
    if (4 < (int)uVar9) {
      func_00270BF8((undefined4 *)(param_1 + 0xf8));
      if (*(int *)(param_1 + 0xa4) == 0) {
        puVar6 = (uint *)0x0;
      }
      else {
        puVar6 = (uint *)**(undefined4 **)(param_1 + 0xac);
      }
      func_00270B6C((int *)(param_1 + 0xf8),local_2c,uStack_28,puVar6);
      *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 1;
      return param_1 + 0xf8;
    }
  } while( true );
}

