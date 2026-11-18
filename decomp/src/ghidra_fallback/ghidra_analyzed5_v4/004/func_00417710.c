#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int func_0040E318(int param_1,int param_2);
extern int func_0040E4BC(int param_1,int param_2);
extern int func_0040E4DC(int param_1,int param_2);
extern int func_0040E554(int param_1,int param_2);
extern int func_004143C0(int param_1,short param_2);
extern int func_0041BF50(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_0041CACC(int param_1,undefined4 param_2,undefined1 param_3,float fparam_0);
extern int func_0041CD48(undefined4 *param_1);
extern int func_0041D24C(int param_1);
extern int DAT_00417a00;
extern float DAT_00417a04;
extern int DAT_00417a08;
extern float DAT_00417a0c;

// USA 00417710 <- EU 004176F0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00417a00 int
// GLOBAL DAT_00417a04 float
// GLOBAL DAT_00417a08 int
// GLOBAL DAT_00417a0c float

undefined4 *
func_00417710(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,float fparam_0,
             float fparam_1,float fparam_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(int *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(int *)(albw_frame + 0x24))
  fVar9 = DAT_00417a04;
  uVar4 = (uint)*(byte *)(param_1 + 0xf0) * param_3;
  iVar3 = *(int *)(param_1 + 300);
  puVar6 = (undefined4 *)0x0;
  iVar5 = (int)((longlong)(int)uVar4 * (longlong)DAT_00417a00 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  if (param_5 != 0) {
    puVar6 = *(undefined4 **)(param_1 + 0x130);
  }
  iVar5 = (iVar5 >> 6) - (iVar5 >> 0x1f);
  uVar7 = (undefined1)param_2;
  if (param_5 != 0 && puVar6 != (undefined4 *)0x0) {
    *(undefined1 *)((int)puVar6 + 0x192) = uVar7;
    fVar8 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 * fVar9;
    puVar6[0x5b] = ALBW_AS_U32(fVar8 * fVar8);
  }
  if (*(char *)(param_1 + 0x27) == '\0') {
    if (puVar6 != (undefined4 *)0x0) goto LAB_0041788c;
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 0x130);
    if (puVar6 != (undefined4 *)0x0) {
      if (*(char *)(puVar6 + 0x24) != '\x04') {
        puVar6[99] = param_4;
        *(undefined1 *)((int)puVar6 + 0x192) = uVar7;
        fVar8 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = fVar8 * fVar9;
        puVar6[0x5b] = ALBW_AS_U32(fVar8 * fVar8);
        goto LAB_0041788c;
      }
      func_0041CD48(puVar6);
    }
  }
  uStack_30 = *(undefined4 *)(DAT_00417a08 + 0x18);
  local_48 = *(undefined4 *)(param_1 + 0x84);
  local_3c = param_4;
  if (param_5 != 0) {
    local_3c = 0xffffffff;
  }
  local_38 = (int)*(char *)(param_1 + 0xf2);
  local_34 = (uint)*(byte *)(iVar3 + 0x74) + (uint)*(byte *)(param_1 + 0xf5);
  local_44 = param_2;
  local_40 = iVar5;
  local_2c = param_1;
  puVar6 = (undefined4 *)
           func_0041BF50(*(int *)(param_1 + 300),(uint)*(byte *)(param_1 + 0x83),&local_48);
  if (puVar6 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (*(char *)(puVar6 + 0x65) != '\0') {
    iVar5 = *(int *)(param_1 + 0x130);
  }
  if (*(char *)(puVar6 + 0x65) != '\0' && iVar5 != 0) {
    do {
      if (*(char *)(iVar5 + 0x194) == *(char *)(puVar6 + 0x65)) {
        func_0040E318(iVar5 + 0x90,0x7e);
        func_0041D24C(iVar5);
      }
      iVar5 = *(int *)(iVar5 + 0x1a4);
    } while (iVar5 != 0);
  }
  puVar6[0x69] = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 **)(param_1 + 0x130) = puVar6;
LAB_0041788c:
  if (*(byte *)(param_1 + 0xf8) < 0x80) {
    func_0040E554((int)(puVar6 + 0x24),(uint)*(byte *)(param_1 + 0xf8));
  }
  if (*(byte *)(param_1 + 0xf9) < 0x80) {
    func_0040E4DC((int)(puVar6 + 0x24),(uint)*(byte *)(param_1 + 0xf9));
  }
  if (*(byte *)(param_1 + 0xfa) < 0x80) {
    *(byte *)(puVar6 + 0x2a) = *(byte *)(param_1 + 0xfa);
  }
  if (*(byte *)(param_1 + 0xfb) < 0x80) {
    func_0040E318((int)(puVar6 + 0x24),(uint)*(byte *)(param_1 + 0xfb));
  }
  if (*(short *)(param_1 + 0xfc) < 0x80) {
    func_0040E4BC((int)(puVar6 + 0x24),(int)*(short *)(param_1 + 0xfc));
  }
  fVar9 = *(float *)(param_1 + 0x88);
  if (*(char *)(param_1 + 0x81) != '\0') {
    fVar8 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0xf6) - param_2,
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar8 + fVar9;
  }
  uVar4 = (uint)*(byte *)(param_1 + 0xf7);
  if (uVar4 == 0) {
    func_0041CACC((int)puVar6,param_4,0,fVar9);
  }
  else {
    uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_00417a0c == fVar9) << 0x1e |
            (uint)(fVar9 <= DAT_00417a0c) << 0x1d;
    bVar2 = (byte)(uVar1 >> 0x18);
    fVar8 = fVar9;
    if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
      fVar8 = -fVar9;
    }
    fVar10 = (float)VectorSignedToFloat(uVar4 * uVar4,(byte)(uVar1 >> 0x15) & 3);
    func_0041CACC((int)puVar6,((int)(fVar8 * fVar10) >> 5) * 5,1,fVar9);
  }
  *(undefined1 *)(param_1 + 0xf6) = uVar7;
  if (*(char *)(param_1 + 0x7b) == '\0') {
    uVar7 = 0xff;
  }
  else {
    uVar7 = 0;
  }
  if ((uint)*(ushort *)(puVar6 + 0x60) < (uint)*(ushort *)((int)puVar6 + 0x17e)) {
    bVar2 = *(byte *)(puVar6 + 0x5f);
    lVar11 = func_001104E4(((uint)*(byte *)((int)puVar6 + 0x17d) - (uint)bVar2) *
                           (uint)*(ushort *)(puVar6 + 0x60),(uint)*(ushort *)((int)puVar6 + 0x17e));
    bVar2 = (char)lVar11 + bVar2;
  }
  else {
    bVar2 = *(byte *)((int)puVar6 + 0x17d);
  }
  *(byte *)(puVar6 + 0x5f) = bVar2;
  *(undefined1 *)((int)puVar6 + 0x17d) = uVar7;
  *(undefined2 *)((int)puVar6 + 0x17e) = 0;
  *(undefined2 *)(puVar6 + 0x60) = 0;
  *(undefined1 *)(puVar6 + 0x4d) = *(undefined1 *)(*(int *)(param_1 + 300) + 0x5c);
  *(undefined1 *)(puVar6 + 100) = *(undefined1 *)(*(int *)(param_1 + 300) + 0x34);
  *(undefined1 *)((int)puVar6 + 0x191) = *(undefined1 *)(*(int *)(param_1 + 300) + 0x35);
  func_004143C0(puVar6[0x68],(short)*(char *)(param_1 + 0x79));
  return puVar6;
}

