#include "ghidra_types.h"

extern int func_002A27C4(int param_1,int param_2);
extern int func_002A49F8(int param_1,int param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FD4(void);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_002a7224;
extern uint *DAT_002a7228;
extern int DAT_002a722c;
extern float DAT_002a7230;
extern int DAT_002a7234;

// USA 002A6F9C <- EU 002A6F78 (Ghidra, non-matching)
// GLOBAL DAT_002a7224 undefined4
// GLOBAL DAT_002a7228 uint *
// GLOBAL DAT_002a722c int
// GLOBAL DAT_002a7230 float
// GLOBAL DAT_002a7234 int

undefined4 func_002A6F9C(int param_1)

{
  char cVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c ((int *)(albw_frame + 0x4))
  uVar7 = DAT_002a7224;
  if (((*(char *)(param_1 + 0xb78) != '\0') &&
      (func_002A27C4(param_1,1),
      *(char *)(param_1 + 0xb78) != '\0' && *(char *)(param_1 + 0xb78) != '\x03')) &&
     (bVar3 = func_00520FD4(), !bVar3)) {
    *(undefined4 *)(param_1 + 0xb64) = 300;
    *(undefined4 *)(param_1 + 0xb68) = uVar7;
    *(undefined4 *)(param_1 + 0xb60) = 0;
    func_004FABDC(param_1,0x10,10,0);
    *(undefined1 *)(param_1 + 0xb78) = 3;
    return 0;
  }
  puVar2 = DAT_002a7228;
  cVar1 = *(char *)(param_1 + 0xb78);
  if (cVar1 == '\0') {
    uVar5 = *(uint *)(param_1 + 0xb60);
    if (*(uint *)(param_1 + 0xb64) <= uVar5) {
      func_004FC07C(param_1,0xe,10,0);
      *(undefined1 *)(param_1 + 0xb78) = 1;
      return 0;
    }
    goto LAB_002a7054;
  }
  if (cVar1 == '\x01') {
    fVar6 = func_0058AA40(param_1);
    if (DAT_002a722c <= (int)ALBW_AS_U32(fVar6)) {
      *(uint *)(param_1 + 1000) = *puVar2 + *(int *)(param_1 + 1000);
    }
    iVar4 = func_0058A8F0(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    func_004FC07C(param_1,0xf,10,0);
    *(undefined1 *)(param_1 + 0xb78) = 2;
LAB_002a70e8:
    local_20 = *puVar2 + *(int *)(param_1 + 1000);
    *(int *)(param_1 + 1000) = local_20;
    local_20 = local_20 + -0x80000000;
    uVar5 = func_0058E2B8(&local_20);
    if (*puVar2 < uVar5) {
      local_1c[0] = *(int *)(param_1 + 1000) + -0x80000000;
      uVar5 = func_0058E2B8(local_1c);
      if (*puVar2 * 2 < uVar5) {
        return 0;
      }
      return func_0051D2F4((int *)(param_1 + 1000),-0x80000000,0,*puVar2,DAT_002a7230);
    }
    func_004FABDC(param_1,0x10,10,0);
    *(undefined4 *)(param_1 + 1000) = 0x80000000;
    *(undefined4 *)(param_1 + 0xb64) = 300;
    *(undefined4 *)(param_1 + 0xb68) = uVar7;
    *(undefined4 *)(param_1 + 0xb60) = 0;
    *(undefined1 *)(param_1 + 0xb78) = 3;
  }
  else {
    if (cVar1 == '\x02') goto LAB_002a70e8;
    if (cVar1 != '\x03') {
      return 0;
    }
  }
  bVar3 = func_00520FD4();
  if (!bVar3) {
    *(undefined1 *)(*(int *)(param_1 + 0xa18) + 0x44) = 0;
    iVar4 = func_002A49F8(param_1,*(int *)(DAT_002a7234 + 0x6c),1);
    if (iVar4 != 0) {
      return func_00662128((undefined4 *)(param_1 + 0x9e0),3);
    }
  }
  iVar4 = func_0058A8F0(param_1);
  if (iVar4 != 0) {
    func_004FABDC(param_1,0x10,0,0);
  }
  uVar5 = *(uint *)(param_1 + 0xb60);
  if (*(uint *)(param_1 + 0xb64) <= uVar5) {
    return func_00662128((undefined4 *)(param_1 + 0x9e0),1);
  }
LAB_002a7054:
  *(uint *)(param_1 + 0xb60) = uVar5 + 1;
  return 0;
}

