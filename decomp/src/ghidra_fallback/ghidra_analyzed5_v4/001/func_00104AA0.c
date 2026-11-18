// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00104A80(void);
extern int func_00104A90(byte param_1);
extern int func_0010585C(void);
extern int func_0010587C(undefined1 param_1);
extern int func_00108680(void);
extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108AF8(void);
extern int func_00108B08(byte param_1);
extern int func_00108B2C(void);
extern int func_00108B3C(void);
extern int func_00108B74(void);
extern int func_00108B84(void);
extern int func_00108DA8(int param_1);
extern int func_00108E90(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4);
extern int func_00108EE4(void);
extern int func_00108F14(void);
extern int func_00108FBC(void);
extern int func_00108FDC(void);
extern int func_00108FF0(void);
extern int func_00109038(undefined4 param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5, undefined4 param_6,uint param_7,uint param_8);
extern int func_00109300(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3,int param_4, undefined4 *param_5,int *param_6);
extern int func_0010939C(void);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern char *DAT_00104f4c;
extern int *DAT_00104f50;
extern undefined4 *DAT_00104f54;

// USA 00104AA0 <- EU 00104AA0 (Ghidra, non-matching)
// GLOBAL DAT_00104f4c char *
// GLOBAL DAT_00104f50 int *
// GLOBAL DAT_00104f54 undefined4 *

/* WARNING: Variable defined which should be unmapped: objStack_3c */

undefined4 func_00104AA0(void)

{
  char *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_3c ((uint *)(albw_frame + 0x4))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(uint *)(albw_frame + 0x18))
  #define local_24 ((int *)(albw_frame + 0x1c))
  cVar4 = func_00108FBC();
  iVar7 = func_00108B2C();
  pcVar1 = DAT_00104f4c;
  if (iVar7 != 0) {
    if (*(code **)(DAT_00104f4c + 0x30) != (code *)0x0) {
      (**(code **)(DAT_00104f4c + 0x30))(*(undefined4 *)(DAT_00104f4c + 0x70));
    }
    func_00108B3C();
  }
  cVar5 = func_0010585C();
  if (cVar5 != '\0') {
    if (*(code **)(pcVar1 + 0x3c) == (code *)0x0) {
      return 1;
    }
    (**(code **)(pcVar1 + 0x3c))(*(undefined4 *)(pcVar1 + 0x7c));
    return 1;
  }
  if ((cVar4 == '\x01') || (cVar4 == '\x02')) {
    iVar7 = func_0010939C();
    uVar6 = func_00108FBC();
    func_00108FDC();
    if (((*(code **)(pcVar1 + 0xc) == (code *)0x0) ||
        (iVar8 = (**(code **)(pcVar1 + 0xc))(*(undefined4 *)(pcVar1 + 0x4c),iVar7,uVar6), iVar8 != 0
        )) && ((iVar7 != 0 && (cVar4 = func_00108AF8(), cVar4 == '\0')))) {
      func_00108B08(uVar6);
      cVar4 = func_00108AF8();
      if (cVar4 != '\x01') {
        func_00108AF8();
      }
    }
    return 0;
  }
  cVar4 = func_00108EE4();
  if (cVar4 == '\0') {
    iVar7 = func_00108B74();
    if (iVar7 != 0) {
      if (*(code **)(pcVar1 + 0x34) != (code *)0x0) {
        (**(code **)(pcVar1 + 0x34))(*(undefined4 *)(pcVar1 + 0x74));
      }
      func_00108B84();
      return 1;
    }
    objStack_3c[0] = (uint)&local_30;
    uVar10 = 1;
    local_30 = 0;
    uVar9 = func_00109300(&local_2c,local_24,(undefined1 *)DAT_00104f54,0x1000,&local_28,
                          (int *)objStack_3c[0]);
    if ((int)uVar9 < 0) {
      func_0010873C(uVar9,0x104df8);
    }
    iVar7 = local_30;
    puVar3 = DAT_00104f54;
    if (local_24[0] == 2) {
      objStack_3c[0] = 0;
      if (local_28 < 0x20) {
        uVar10 = 0;
      }
      else {
        uVar10 = *DAT_00104f54;
      }
      if (*(code **)(pcVar1 + 0x10) != (code *)0x0) {
        (**(code **)(pcVar1 + 0x10))(*(undefined4 *)(pcVar1 + 0x50),uVar10,objStack_3c);
      }
      func_00108E90(1,local_2c,0,0);
      objStack_3c[1] = *(uint *)(pcVar1 + 0x90);
      objStack_3c[2] = *(uint *)(pcVar1 + 0x94);
      func_00109038(local_2c,3,0,0,objStack_3c[0],objStack_3c[0],objStack_3c[1],objStack_3c[2]);
      uVar10 = 0;
    }
    else if (local_24[0] == 5) {
      func_00108E90(1,local_2c,0,0);
      if (*(code **)(pcVar1 + 0x14) != (code *)0x0) {
        (**(code **)(pcVar1 + 0x14))(*(undefined4 *)(pcVar1 + 0x54),local_2c,puVar3,local_28,iVar7);
      }
      uVar10 = 0;
    }
    else if (local_24[0] == 8) {
      if (*(code **)(pcVar1 + 0x18) != (code *)0x0) {
        (**(code **)(pcVar1 + 0x18))(*(undefined4 *)(pcVar1 + 0x58));
      }
      func_00108DA8(0);
      uVar10 = 0;
    }
    else if (local_24[0] == 9) {
      func_00108DA8(1);
      if (*(code **)(pcVar1 + 0x1c) != (code *)0x0) {
        (**(code **)(pcVar1 + 0x1c))(*(undefined4 *)(pcVar1 + 0x5c));
      }
      uVar10 = 0;
    }
    if (local_30 == 0) {
      return uVar10;
    }
    software_interrupt(0x23);
    return uVar10;
  }
  cVar4 = func_00108EE4();
  if (cVar4 != '\x01') {
    if (cVar4 == '\x02') {
      func_00104A90(4);
      if (((*(int *)(pcVar1 + 0x28) != 0) && (cVar4 = func_0010585C(), cVar4 == '\0')) &&
         (iVar7 = func_00104A80(), iVar7 == 0)) {
        (**(code **)(pcVar1 + 0x28))(*(undefined4 *)(pcVar1 + 0x68));
      }
      piVar2 = DAT_00104f50;
      func_0010C0C0(DAT_00104f50);
      for (iVar7 = *(int *)(pcVar1 + 4); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
        if (*(code **)(iVar7 + 8) != (code *)0x0) {
          (**(code **)(iVar7 + 8))(*(undefined4 *)(iVar7 + 0xc));
        }
      }
      func_0010C160(piVar2);
      func_00108FF0();
      goto code_r0x00104d80;
    }
    if (cVar4 != '\x03') {
      if (((cVar4 == '\x04') && (*(int *)(pcVar1 + 0x24) != 0)) &&
         ((cVar4 = func_0010585C(), cVar4 == '\0' && (iVar7 = func_00104A80(), iVar7 == 0)))) {
        (**(code **)(pcVar1 + 0x24))(*(undefined4 *)(pcVar1 + 100));
      }
      goto code_r0x00104d80;
    }
    func_00108680();
    if (((*(int *)(pcVar1 + 0x2c) != 0) && (cVar4 = func_0010585C(), cVar4 == '\0')) &&
       (iVar7 = func_00104A80(), iVar7 == 0)) {
      (**(code **)(pcVar1 + 0x2c))(*(undefined4 *)(pcVar1 + 0x6c));
    }
    uVar6 = 5;
LAB_00104d78:
    func_00104A90(uVar6);
    goto code_r0x00104d80;
  }
  cVar4 = func_0010585C();
  iVar7 = 0;
  if (cVar4 == '\0') {
    iVar8 = func_00104A80();
    if (iVar8 == 0) {
      if (*(code **)(pcVar1 + 0x20) != (code *)0x0) {
        iVar7 = (**(code **)(pcVar1 + 0x20))(*(undefined4 *)(pcVar1 + 0x60));
      }
      if ((*pcVar1 != '\0') || (iVar8 = func_0010939C(), iVar8 == 0)) goto LAB_00104c2c;
      iVar7 = 0;
    }
LAB_00104c50:
    uVar6 = 3;
  }
  else {
LAB_00104c2c:
    if (iVar7 == 0) goto LAB_00104c50;
    if (iVar7 != 1) {
      if (iVar7 != 2) goto code_r0x00104d80;
      uVar6 = 1;
      goto LAB_00104d78;
    }
    uVar6 = 2;
  }
  func_00104A90(uVar6);
  func_0010587C((char)iVar7);
code_r0x00104d80:
  func_00108F14();
  return 0;
}

