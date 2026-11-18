#include "ghidra_types.h"

extern int func_002ACC88(undefined4 *param_1);
extern int func_002AE594(int param_1,undefined4 *param_2);
extern int func_002AE620(int param_1,undefined4 *param_2,float *param_3);
extern int func_002AE72C(int param_1,undefined4 *param_2);
extern int func_00352128(int param_1,int *param_2,uint *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_005811E8(int *param_1);
extern int func_0058A378(undefined4 *param_1);
extern int func_0058A7F4(int param_1);
extern int func_0058A9D8(int param_1);
extern uint *DAT_002afe4c;
extern char s_ReactFire_002afe40[];
extern char s_ReactIce_002afe34[];

// USA 002AFA70 <- EU 002AFA4C (Ghidra, non-matching)
// GLOBAL DAT_002afe4c uint *
// GLOBAL s_ReactFire_002afe40 string
// GLOBAL s_ReactIce_002afe34 string

undefined4 func_002AFA70(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  iVar2 = func_0058A9D8(*(int *)(param_1 + 0x34));
  puVar3 = func_0058A7F4(*(int *)(param_1 + 0x34));
  if (iVar2 == 0) {
    uVar5 = *puVar3;
    cVar6 = (uVar5 & 0x10) != 0;
    bVar7 = (uVar5 & 0x20) != 0;
    bVar1 = false;
    if ((uVar5 & 0x40) != 0) goto LAB_002afaa4;
  }
  else {
    cVar6 = true;
    bVar7 = (bool)cVar6;
LAB_002afaa4:
    bVar1 = true;
  }
  switch(*(undefined1 *)(param_2 + 9)) {
  case 0:
  case 8:
    if (*(char *)((int)param_2 + 0x25) == '\x01') {
      cVar6 = '\x01';
      if (param_4 == 0) {
        cVar6 = *(char *)((int)param_2 + 0x27);
      }
      if (param_4 == 0 && cVar6 == '\0' || param_3 == 0) {
        return 0;
      }
      if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x59c) & 0x10000000) == 0) {
        return 0;
      }
      iVar2 = func_005811E8((int *)(param_1 + 0x2b0));
      if (iVar2 != 0) {
        return 0;
      }
LAB_002afb8c:
      return func_00352128(*(int *)(param_1 + 0x34) + 0x324,(int *)(param_1 + 0x2b0),
                    (uint *)s_ReactFire_002afe40);
    }
    if (*(char *)((int)param_2 + 0x25) != '\x03') {
      if (*(char *)((int)param_2 + 0x27) != '\0') {
        local_20 = 0;
        func_00352128(*(int *)(param_1 + 0x34) + 0x324,&local_20,DAT_002afe4c);
        if ((local_20 != 0) && (*(int *)(local_20 + 0x1c) == local_1c)) {
          func_004A2F38(local_20,param_2);
        }
        goto LAB_002afda8;
      }
      goto LAB_002afd58;
    }
    if (*(char *)((int)param_2 + 0x27) == '\0') {
      return 0;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0x344);
    goto joined_r0x002afb3c;
  case 1:
    if (param_3 != 0) {
      if (param_4 == 0) {
        cVar6 = *(char *)((int)param_2 + 0x27);
      }
      if (((param_4 != 0 || cVar6 != '\0') &&
          ((*(uint *)(*(int *)(param_1 + 0x34) + 0x59c) & 0x10000000) != 0)) &&
         (iVar2 = func_005811E8((int *)(param_1 + 0x2b0)), iVar2 == 0)) goto LAB_002afb8c;
    }
    break;
  case 2:
    if (*(char *)((int)param_2 + 0x27) == '\0') {
      return 0;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0x344);
joined_r0x002afb3c:
    if (iVar2 != 0) {
      func_004A1B9C(&local_20,iVar2,(uint *)s_ReactIce_002afe34);
    }
    break;
  default:
    if (*(char *)((int)param_2 + 0x25) == '\x01') {
      cVar6 = '\x01';
      if (param_4 == 0) {
        cVar6 = *(char *)((int)param_2 + 0x27);
      }
      if (((param_4 != 0 || cVar6 != '\0') && (param_3 != 0)) &&
         ((*(uint *)(*(int *)(param_1 + 0x34) + 0x59c) & 0x10000000) != 0)) {
        iVar2 = func_005811E8((int *)(param_1 + 0x2b0));
        if (iVar2 != 0) {
          return 0;
        }
        goto LAB_002afb8c;
      }
    }
    break;
  case 5:
    if ((bool)cVar6 != false) {
      if (*(char *)((int)param_2 + 0x27) != '\0') {
        if (*(char *)(param_2 + 10) == '\x01') {
          func_002AE594(*(int *)(param_1 + 0x34),param_2);
        }
        else {
          func_002AE620(*(int *)(param_1 + 0x34),param_2,(float *)0x0);
        }
LAB_002afda8:
        return func_002ACC88(param_2);
      }
      goto LAB_002afdcc;
    }
    break;
  case 7:
    if (bVar7 != false) {
      if (*(char *)((int)param_2 + 0x27) != '\0') {
        return func_002AE594(*(int *)(param_1 + 0x34),param_2);
      }
LAB_002afd58:
      puVar4 = func_0058A378(param_2);
      return func_002AE72C(*(int *)(param_1 + 0x34),puVar4);
    }
    break;
  case 9:
    if (bVar1) {
      cVar6 = *(char *)((int)param_2 + 0x27);
    }
    goto joined_r0x002afc04;
  case 10:
    if (bVar1) {
      cVar6 = *(char *)((int)param_2 + 0x27);
    }
joined_r0x002afc04:
    if (bVar1 && cVar6 != '\0') {
      return func_002AE620(*(int *)(param_1 + 0x34),param_2,(float *)0x0);
    }
    break;
  case 0xb:
    if (*(char *)((int)param_2 + 0x27) != '\0') {
      return func_002AE620(*(int *)(param_1 + 0x34),param_2,(float *)(*(int *)(param_1 + 0x34) + 0x3d0));
    }
    break;
  case 0xc:
    break;
  case 0xd:
    if (param_4 == 0) {
      cVar6 = *(char *)((int)param_2 + 0x27);
    }
    if (((param_4 != 0 || cVar6 != '\0') && param_3 != 0) &&
       ((*(uint *)(*(int *)(param_1 + 0x34) + 0x59c) & 0x10000000) != 0)) {
      iVar2 = func_005811E8((int *)(param_1 + 0x2b0));
      if (iVar2 != 0) {
        return 0;
      }
      goto LAB_002afb8c;
    }
    break;
  case 0xe:
    if (*(char *)((int)param_2 + 0x27) == '\0') goto LAB_002afd58;
    local_20 = 0;
    func_00352128(*(int *)(param_1 + 0x34) + 0x324,&local_20,DAT_002afe4c);
    if (local_20 != 0) {
      if (*(int *)(local_20 + 0x1c) == local_1c) {
        func_004A2F38(local_20,param_2);
      }
      return 0;
    }
    break;
  case 0x10:
    if (*(char *)((int)param_2 + 0x27) != '\0') {
      func_002AE620(*(int *)(param_1 + 0x34),param_2,(float *)0x0);
      return func_002ACC88(param_2);
    }
LAB_002afdcc:
    puVar4 = func_0058A378(param_2);
    func_002AE72C(*(int *)(param_1 + 0x34),puVar4);
    return func_002ACC88(param_2);
  }
  return 0;
}

