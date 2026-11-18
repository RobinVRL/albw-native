#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003D566C(int param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5, float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4, float fparam_5,float fparam_6,float fparam_7);
extern int func_0048F6C4(int param_1,uint param_2,uint param_3,float *param_4);
extern int func_0057E178(int param_1,uint param_2);
extern uint *DAT_0048d740;
extern undefined4 *DAT_0048d744;
extern undefined4 DAT_0048d748;
extern int DAT_0048d74c;
extern undefined4 DAT_0048d750;

// USA 0048D4B4 <- EU 0048D48C (Ghidra, non-matching)
// GLOBAL DAT_0048d740 uint *
// GLOBAL DAT_0048d744 undefined4 *
// GLOBAL DAT_0048d748 undefined4
// GLOBAL DAT_0048d74c int
// GLOBAL DAT_0048d750 undefined4

/* WARNING: Variable defined which should be unmapped: objStack_18 */

void func_0048D4B4(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  float in_s4;
  float in_s5;
  float in_s6;
  float in_s7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  puVar2 = (undefined4 *)func_0057E178(*(int *)(param_1 + 0x138),2);
  if (((*DAT_0048d740 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0048d740), iVar3 != 0)) {
    *DAT_0048d744 = DAT_0048d748;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar2)(puVar2,DAT_0048d744), iVar3 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if ((puVar2[0x58d] & 1) != 0) {
      uVar4 = puVar2[0x570];
      *(undefined4 *)(param_1 + 0x110) = 0;
      if ((uVar4 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x110) = 1;
      }
      if ((uVar4 & 2) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xfffffffd;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 2;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 8) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xfffff7ff;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 0x800;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 0x10) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xfff7ffff;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 0x80000;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 0x20) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xfffbffff;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 0x40000;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 0x40) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xfffeffff;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 0x10000;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 0x80) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xfffdffff;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 0x20000;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 0x100) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xffffbfff;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 0x4000;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 0x200) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xffffdfff;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 0x2000;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 0x400) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xfffffff7;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 8;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 0x800) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xffffffef;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 0x10;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 0x1000) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xffffff7f;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 0x80;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 4) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xffffefff;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 0x1000;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 0x10000000) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xff7fffff;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 0x800000;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 0x20000000) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xffbfffff;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 0x400000;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      if ((uVar4 & 0x40000000) == 0) {
        uVar5 = *(uint *)(param_1 + 0x110) & 0xffefffff;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x110) | 0x100000;
      }
      if ((int)uVar4 < 0) {
        uVar4 = uVar5 | 0x200000;
      }
      else {
        uVar4 = uVar5 & 0xffdfffff;
      }
      *(uint *)(param_1 + 0x110) = uVar5;
      *(uint *)(param_1 + 0x110) = uVar4;
      objStack_18[0] = (uint)*(short *)((int)puVar2 + 0x15ce);
      func_003D566C(*(int *)(DAT_0048d74c + (int)puVar2),(float *)(param_1 + 0x11c),
                    (float *)(param_1 + 0x120),(int)*(short *)(puVar2 + 0x573),objStack_18[0],in_s0,
                    in_s1,in_s2,in_s3,in_s4,in_s5,in_s6,in_s7);
      uVar1 = DAT_0048d750;
      *(undefined4 *)(param_1 + 0x124) = DAT_0048d750;
      *(undefined4 *)(param_1 + 0x128) = uVar1;
      *(undefined4 *)(param_1 + 300) = uVar1;
      *(undefined4 *)(param_1 + 0x130) = uVar1;
    }
    if ((puVar2[0x58d] & 2) != 0) {
      objStack_18[1] =
           ALBW_AS_U32(VectorUnsignedToFloat
                     ((uint)*(ushort *)((int)puVar2 + 0x15d6),(byte)(in_fpscr >> 0x15) & 3));
      objStack_18[0] =
           ALBW_AS_U32(VectorUnsignedToFloat((uint)*(ushort *)(puVar2 + 0x575),(byte)(in_fpscr >> 0x15) & 3));
      func_0048F6C4(param_1 + 4,(uint)(*(char *)(puVar2 + 0x576) == '\x01'),1,(float *)objStack_18);
    }
  }
  return;
}

