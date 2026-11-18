#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00104338(uint param_1,int param_2);
extern int func_0010584C(byte param_1);
extern int func_0010586C(byte param_1);
extern int func_0010639C(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_001080D4(int *param_1);
extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108AE8(void *param_1);
extern int func_00108B18(void);
extern int func_00108B60(void);
extern int func_00108B98(void);
extern int func_00108DF8(void);
extern int func_00108EF4(byte param_1);
extern int func_00108F04(byte param_1);
extern int func_00108F4C(void);
extern int func_00108FBC(void);
extern int func_00108FCC(byte param_1);
extern int func_00109208(undefined4 param_1,undefined4 param_2);
extern int func_001092BC(undefined4 param_1,undefined1 *param_2);
extern int func_0010A884(int *param_1);
extern int func_0010A98C(uint param_1);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern undefined *DAT_001052d4;
extern undefined4 *DAT_001052d8;
extern char *DAT_001052dc;
extern int *DAT_001052e0;
extern uint DAT_001052e4;

// USA 00104F90 <- EU 00104F90 (Ghidra, non-matching)
// GLOBAL DAT_001052d4 undefined *
// GLOBAL DAT_001052d8 undefined4 *
// GLOBAL DAT_001052dc char *
// GLOBAL DAT_001052e0 int *
// GLOBAL DAT_001052e4 uint

/* WARNING: Variable defined which should be unmapped: objStack_28 */

void func_00104F90(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_r1;
  code *pcVar9;
  bool bVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined4 *)(albw_frame + 0x1c))
  func_00100118((int)&local_1c,DAT_001052d4,4,3);
  pcVar2 = DAT_001052dc;
  puVar1 = DAT_001052d8;
  local_1c = *DAT_001052d8;
  local_18 = DAT_001052d8[1];
  local_14 = DAT_001052d8[2];
  cVar3 = *DAT_001052dc;
  do {
    if (cVar3 != '\0') {
      return;
    }
    objStack_28[0] = 0xffffffff;
    objStack_28[1] = 0xffffffff;
    uVar5 = func_0010639C(&local_20,&local_1c,0xffffffff);
    iVar8 = -((int)uVar5 >> 0x1f);
    if (iVar8 != 0) {
      func_0010873C(uVar5,0x105000);
    }
    if (*pcVar2 != '\0') {
      return;
    }
    iVar6 = func_0010A884(DAT_001052e0);
    if (iVar6 != 0) {
      func_00104338((uint)((ulonglong)DAT_001052e4 * 10),(int)((ulonglong)DAT_001052e4 * 10 >> 0x20)
                   );
      uVar5 = puVar1[local_20];
      software_interrupt(0x18);
      if ((int)uVar5 < 0) {
        func_0010A98C(uVar5);
      }
      goto LAB_001052c0;
    }
    uVar5 = puVar1[local_20];
    software_interrupt(0x19);
    if ((int)uVar5 < 0) {
      func_0010A98C(uVar5);
    }
    if (local_20 == 2) {
      uVar7 = 0xc;
code_r0x001051a0:
      func_00108AE8(uVar7);
      func_001080D4(DAT_001052e0);
      goto LAB_001052c0;
    }
    if (local_20 == 1) {
      if ((*(code **)(pcVar2 + 4) == (code *)0x0) ||
         (iVar8 = (**(code **)(pcVar2 + 4))(*(undefined4 *)(pcVar2 + 8)), iVar8 != 0)) {
        func_001080D4(DAT_001052e0);
      }
      goto LAB_001052c0;
    }
    if (local_20 != 0) goto LAB_001052c0;
    func_00108DF8();
    uVar7 = func_00108B98();
    iVar6 = func_001092BC(uVar7,(undefined1 *)objStack_28);
    func_00108F4C();
    if (iVar6 < 0) goto LAB_001052c0;
    uVar5 = objStack_28[0] & 0xff;
    switch(uVar5) {
    default:
                    /* WARNING: Subroutine does not return */
      func_0010C1B8(uVar5,extraout_r1,iVar8);
    case 1:
    case 2:
      cVar3 = func_00108FBC();
      if (cVar3 == '\0') {
        uVar4 = 1;
        if ((char)objStack_28[0] != '\x01') {
          uVar4 = 2;
        }
        func_00108FCC(uVar4);
      }
      if ((*(code **)(pcVar2 + 4) == (code *)0x0) ||
         (iVar8 = (**(code **)(pcVar2 + 4))(*(undefined4 *)(pcVar2 + 8)), iVar8 != 0)) {
        if ((objStack_28[0] & 0xff) == 1) {
          uVar7 = 6;
        }
        else {
          uVar7 = 7;
        }
        goto code_r0x001051a0;
      }
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      bVar10 = uVar5 == 3;
      if (bVar10) {
        uVar5 = 1;
      }
      uVar4 = (undefined1)uVar5;
      if (bVar10 || uVar5 == 4) {
LAB_001051e8:
        func_00108F04(uVar4);
      }
      else {
        if (uVar5 == 5) {
          uVar4 = 2;
          goto LAB_001051e8;
        }
        if (uVar5 == 6) {
          uVar4 = 3;
          goto LAB_001051e8;
        }
      }
      pcVar9 = *(code **)(pcVar2 + 4);
      if (pcVar9 == (code *)0x0) break;
      goto LAB_0010524c;
    case 7:
      func_00108B18();
      func_00108EF4(1);
      func_0010586C(1);
      pcVar9 = *(code **)(pcVar2 + 4);
      goto joined_r0x00105248;
    case 8:
      func_00108B60();
      func_0010584C(1);
      pcVar9 = *(code **)(pcVar2 + 4);
joined_r0x00105248:
      if (pcVar9 != (code *)0x0) {
LAB_0010524c:
        (*pcVar9)(*(undefined4 *)(pcVar2 + 8));
      }
      break;
    case 9:
      func_0010584C(0);
      break;
    case 10:
      func_00108DF8();
      uVar5 = func_00109208(0,0x40);
      if ((int)uVar5 < 0) {
        func_0010873C(uVar5,0x105288);
      }
      func_00108F4C();
      break;
    case 0xb:
      func_0010586C(1);
    }
LAB_001052c0:
    cVar3 = *pcVar2;
  } while( true );
}

