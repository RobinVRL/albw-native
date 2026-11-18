#include "ghidra_types.h"

extern int func_0040E318(int param_1,int param_2);
extern int func_0040E4BC(int param_1,int param_2);
extern int func_0040E4DC(int param_1,int param_2);
extern int func_0040E554(int param_1,int param_2);
extern int func_00410790(undefined4 *param_1,int *param_2,int param_3);
extern int func_0041CA44(int param_1,uint param_2,undefined4 param_3,undefined4 param_4);
extern int func_0041CDB8(int param_1,byte *param_2,undefined4 param_3,uint param_4);
extern int func_0056A6FC(int param_1,uint *param_2,uint param_3,uint param_4,uint param_5);
extern int func_0056A888(int *param_1,byte *param_2);
extern int func_0056C9A4(int *param_1,uint param_2);
extern float DAT_0056d800;
extern float DAT_0056d804;

// USA 0056D6B0 <- EU 0056D688 (Ghidra, non-matching)
// GLOBAL DAT_0056d800 float
// GLOBAL DAT_0056d804 float

undefined4 * func_0056D6B0(undefined4 param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define abStack_ac ((byte *)(albw_frame + 0x4))
  #define local_a8 (*(int *)(albw_frame + 0x8))
  #define uStack_38 (*(uint *)(albw_frame + 0x78))
  #define local_34 (*(uint *)(albw_frame + 0x7c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x80))
  #define local_2c (*(byte *)(albw_frame + 0x84))
  #define local_2b (*(byte *)(albw_frame + 0x85))
  #define local_2a (*(undefined1 *)(albw_frame + 0x86))
  #define local_29 (*(byte *)(albw_frame + 0x87))
  #define local_28 (*(byte *)(albw_frame + 0x88))
  #define local_27 (*(undefined1 *)(albw_frame + 0x89))
  #define local_26 (*(byte *)(albw_frame + 0x8a))
  #define local_25 (*(byte *)(albw_frame + 0x8b))
  #define local_24 (*(undefined1 *)(albw_frame + 0x8c))
  #define local_23 (*(undefined1 *)(albw_frame + 0x8d))
  #define local_22 (*(undefined1 *)(albw_frame + 0x8e))
  #define aiStack_20 ((int *)(albw_frame + 0x90))
  local_2c = 0;
  local_2b = 0;
  local_2a = 0;
  local_29 = 0;
  local_28 = 0;
  iVar1 = func_0056A6FC(param_2,&uStack_38,*param_4,param_4[1],param_4[2]);
  puVar3 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)func_0056C9A4(param_3,local_34);
    func_00410790(aiStack_20,piVar2,0);
    iVar1 = func_0056A888(aiStack_20,abStack_ac);
    puVar3 = (undefined4 *)0x0;
    if (iVar1 != 0) {
      if (2 < local_a8) {
        local_a8 = 2;
      }
      puVar3 = func_0041CA44(local_a8,param_4[5],param_4[6],param_4[7]);
      fVar5 = DAT_0056d800;
      if (puVar3 != (undefined4 *)0x0) {
        *(char *)((int)puVar3 + 0x192) = (char)param_4[1];
        *(undefined1 *)((int)puVar3 + 0x193) = local_27;
        fVar4 = (float)VectorSignedToFloat((uint)local_26 * param_4[2] * param_4[2],
                                           (byte)(in_fpscr >> 0x15) & 3);
        puVar3[0x5b] = ALBW_AS_U32(fVar4 * fVar5);
        puVar3[0x5e] = local_30;
        func_0040E554((int)(puVar3 + 0x24),(uint)local_2c);
        func_0040E4BC((int)(puVar3 + 0x24),(uint)local_29);
        func_0040E4DC((int)(puVar3 + 0x24),(uint)local_2b);
        *(undefined1 *)(puVar3 + 0x2a) = local_2a;
        func_0040E318((int)(puVar3 + 0x24),(uint)local_28);
        fVar5 = (float)VectorSignedToFloat((uint)local_25 + param_4[4] + -0x40,
                                           (byte)(in_fpscr >> 0x15) & 3);
        puVar3[0x5c] = ALBW_AS_U32(fVar5 * DAT_0056d804);
        *(undefined1 *)(puVar3 + 0x65) = local_23;
        *(undefined1 *)((int)puVar3 + 0x135) = local_24;
        *(undefined1 *)((int)puVar3 + 0x195) = local_22;
        func_0041CDB8((int)puVar3,abStack_ac,param_4[3],0);
      }
    }
  }
  return puVar3;
}

