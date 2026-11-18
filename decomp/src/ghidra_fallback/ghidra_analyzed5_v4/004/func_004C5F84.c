#include "ghidra_types.h"

extern int func_003CEBD8(uint param_1,uint param_2);
extern int func_003CF2D4(int *param_1,uint *param_2,int param_3,undefined4 *param_4);
extern int func_003CF8C4(int *param_1,int param_2,uint *param_3);
extern int func_003D1CE4(int param_1,int param_2,undefined4 param_3,undefined1 param_4,uint param_5, uint param_6,uint param_7);
extern int func_003D1D58(int param_1,int param_2,uint param_3,int param_4);
extern int func_003D1FB4(int param_1,int param_2,uint param_3);
extern int func_003D2210(undefined4 *param_1);
extern int func_003D2288(undefined4 *param_1,int param_2,undefined4 *param_3);
extern int func_003D231C(undefined4 *param_1);
extern int func_003D3554(longlong *param_1,int *param_2);
extern int func_004C5DA8(int *param_1,int param_2,uint param_3,undefined4 *param_4);
extern uint *DAT_004c6278;
extern uint DAT_004c627c;
extern uint DAT_004c6280;
extern uint DAT_004c6284;
extern uint DAT_004c6288;
extern uint DAT_004c628c;
extern undefined4 DAT_004c6290;
extern undefined4 DAT_004c6294;
extern undefined4 DAT_004c6298;

// USA 004C5F84 <- EU 004C5F5C (Ghidra, non-matching)
// GLOBAL DAT_004c6278 uint *
// GLOBAL DAT_004c627c uint
// GLOBAL DAT_004c6280 uint
// GLOBAL DAT_004c6284 uint
// GLOBAL DAT_004c6288 uint
// GLOBAL DAT_004c628c uint
// GLOBAL DAT_004c6290 undefined4
// GLOBAL DAT_004c6294 undefined4
// GLOBAL DAT_004c6298 undefined4

/* WARNING: Variable defined which should be unmapped: objStack_488 */
/* WARNING: Variable defined which should be unmapped: objStack_480 */

undefined4 func_004C5F84(int *param_1,uint *param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x490];
  #define objStack_488 ((uint *)(albw_frame + 0x8))
  #define objStack_480 ((uint *)(albw_frame + 0x10))
  #define local_41a (*(ushort *)(albw_frame + 0x76))
  #define auStack_320 ((uint *)(albw_frame + 0x170))
  #define local_2b2 (*(undefined2 *)(albw_frame + 0x1de))
  #define auStack_1b8 ((undefined4 *)(albw_frame + 0x2d8))
  #define auStack_1b0 ((undefined4 *)(albw_frame + 0x2e0))
  #define local_50 (*(uint *)(albw_frame + 0x440))
  #define local_4c (*(uint *)(albw_frame + 0x444))
  #define auStack_48 ((undefined4 *)(albw_frame + 0x448))
  #define local_40 ((int *)(albw_frame + 0x450))
  func_003D2210(auStack_320);
  uVar2 = func_003CEBD8(*param_2,0);
  objStack_488[0] = 3;
  objStack_488[1] = 0xff;
  objStack_480[0] = 1;
  iVar3 = func_003D1CE4((int)auStack_320,uVar2,1,3,3,0xff,1);
  if ((((-1 < iVar3) && (iVar3 = func_003D1FB4((int)auStack_320,param_2[1],param_2[2]), -1 < iVar3))
      && (iVar3 = func_003D1D58((int)auStack_320,2,param_2[4],param_2[3]), -1 < iVar3)) &&
     (iVar3 = func_003D1D58((int)auStack_320,4,param_2[6],param_2[5]), -1 < iVar3)) {
    local_2b2 = (undefined2)param_3;
    if ((param_2[2] & 3) != 0) {
      param_2[2] = param_2[2] + 3 & 0xfffffffc;
    }
    if (param_4 == 0) {
      uVar2 = param_1[0x84];
      uVar4 = param_1[0x83];
    }
    else {
      uVar2 = param_1[0xf0];
      uVar4 = param_1[0xef];
    }
    bVar1 = 0;
    uVar6 = 0;
    if (uVar2 != 0) {
      do {
        func_003D2210(objStack_488);
        uVar5 = func_004C5DA8(param_1,param_4,uVar6,objStack_488);
        bVar8 = uVar5 == 0;
        if (bVar8) {
          uVar5 = (uint)local_41a;
        }
        if (bVar8 && uVar5 == param_3) {
          func_003D231C(auStack_1b8);
          func_003D2288(auStack_1b0,(int)objStack_488,auStack_1b8);
          func_003CF8C4(param_1,param_4,auStack_1b8);
          bVar1 = 1;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
    if ((bool)(uVar4 <= uVar2 & ~bVar1)) {
      func_003D2210(auStack_1b8);
      if (param_4 == 0) {
        uVar2 = param_1[0x84];
      }
      else {
        uVar2 = param_1[0xf0];
      }
      uVar4 = *DAT_004c6278;
      uVar6 = DAT_004c6278[1];
      uVar5 = 0;
      uVar7 = 0;
      if (uVar2 != 0) {
        do {
          func_003D2210(objStack_488);
          iVar3 = func_004C5DA8(param_1,param_4,uVar7,objStack_488);
          if ((iVar3 == 0) &&
             (func_003D3554((longlong *)&local_50,local_40),
             (int)(local_4c - (uVar6 + (local_50 < uVar4))) < 0 !=
             (SBORROW4(local_4c,uVar6) != SBORROW4(local_4c - uVar6,(uint)(local_50 < uVar4))))) {
            uVar4 = local_50;
            uVar6 = local_4c;
            uVar5 = uVar7;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      iVar3 = func_004C5DA8(param_1,param_4,uVar5,auStack_1b8);
      if (iVar3 == 0) {
        func_003D231C(objStack_488);
        func_003D2288(objStack_480,(int)auStack_1b8,objStack_488);
        func_003CF8C4(param_1,param_4,objStack_488);
      }
    }
    func_003D231C(auStack_48);
    uVar2 = func_003CF2D4(param_1,auStack_320,param_4,auStack_48);
    if ((uVar2 & 0x80000000) == 0) {
      return 0;
    }
    if (uVar2 == DAT_004c627c) {
      return 9;
    }
    if (uVar2 == DAT_004c6280) {
      return 10;
    }
    if (uVar2 != DAT_004c6284) {
      uVar4 = DAT_004c6288;
      if (uVar2 != DAT_004c6288) {
        uVar4 = DAT_004c6288 + 1;
      }
      if (uVar2 == DAT_004c6288 || uVar2 == uVar4) {
        return 0xb;
      }
      if (uVar2 == DAT_004c628c) {
        return 1;
      }
    }
  }
  return 0xc;
}

