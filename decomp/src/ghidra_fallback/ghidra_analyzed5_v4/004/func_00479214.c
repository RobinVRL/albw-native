#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_0031B6A0(int param_1,int param_2,int param_3);
extern int func_00427688(undefined4 param_1);
extern int func_00478A6C(int param_1,uint param_2,uint param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern uint DAT_004793c4;
extern undefined4 *DAT_004793c8;
extern uint *DAT_004793cc;

// USA 00479214 <- EU 004791EC (Ghidra, non-matching)
// GLOBAL DAT_004793c4 uint
// GLOBAL DAT_004793c8 undefined4 *
// GLOBAL DAT_004793cc uint *

void func_00479214(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define iStack_34 (*(int *)(albw_frame + 0x1c))
  uVar6 = 0;
  uVar9 = (ulonglong)DAT_004793c4;
  do {
    piVar1 = (int *)(param_1 + 0x168);
    if (uVar6 < 0x14) {
      piVar1 = piVar1 + uVar6;
    }
    iVar8 = 0;
    iVar7 = *piVar1;
    iVar2 = func_00427688((int)*(char *)(iVar7 + 0xe0));
    if (iVar2 == 0) {
      *(undefined1 *)(iVar7 + 0xe1) = 0;
      if ((*(char *)(iVar7 + 0xd) == '\x01') ||
         ((*(char *)(iVar7 + 0xd) == '\x03' && (*(char *)(iVar7 + 0xe) == '\x03')))) {
        *(char *)(iVar7 + 0xe2) = (char)param_2;
        func_0012C718(iVar7);
        iVar8 = -1;
        goto LAB_004792b0;
      }
    }
    else {
      func_0031B6A0(iVar7 + 0x78,(int)*(char *)(iVar7 + 0xe0),0);
      *(undefined1 *)(iVar7 + 0xe1) = 1;
      if ((*(char *)(iVar7 + 0xd) == '\0') && (*(char *)(iVar7 + 0xe) == '\0')) {
        *(char *)(iVar7 + 0xe2) = (char)param_2;
        *(undefined1 *)(iVar7 + 0xe) = 1;
      }
      else {
LAB_004792b0:
        if (iVar8 < 1) {
          if ((iVar8 < 0) && (param_2 == 0)) {
            piVar1 = (int *)(param_1 + 0x168);
            if (uVar6 < 0x14) {
              piVar1 = piVar1 + uVar6;
            }
            iVar2 = *(int *)(**(int **)(*piVar1 + 0x1c) + 0x10);
            uStack_44 = *(undefined4 *)(iVar2 + 100);
            local_48 = *(undefined4 *)(iVar2 + 0x54);
            local_40 = (undefined4)uVar9;
            uVar4 = *DAT_004793c8;
            uVar5 = DAT_004793c8[1];
            *(undefined4 *)(param_1 + 800) = DAT_004793c8[2];
            *(undefined4 *)(param_1 + 0x318) = uVar4;
            *(undefined4 *)(param_1 + 0x31c) = uVar5;
            iVar2 = *(int *)(*(int *)(param_1 + 0x314) + 0x20);
            if (iVar2 == 0) {
              iVar2 = 0;
              iVar7 = 0;
            }
            else {
              func_004A1B9C(&local_38,iVar2,DAT_004793cc);
              iVar2 = local_38;
              iVar7 = iStack_34;
            }
            if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == iVar7)) {
              func_004A2F38(iVar2,&local_48);
            }
          }
          goto LAB_004793ac;
        }
      }
      if ((*(char *)(param_1 + 0x30f) != '\0') && (uVar3 = 0, 0 < (int)uVar6)) {
        do {
          piVar1 = (int *)(param_1 + 0x168);
          if (uVar3 < 0x14) {
            piVar1 = piVar1 + uVar3;
          }
          if (*(char *)(*piVar1 + 0xe1) == '\0') {
            func_00478A6C(param_1,uVar6,uVar3);
            break;
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < (int)uVar6);
      }
    }
LAB_004793ac:
    uVar6 = uVar6 + 1;
    if (0x13 < (int)uVar6) {
      return;
    }
  } while( true );
}

