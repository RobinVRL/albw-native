#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_002A6B54(int param_1);
extern int func_002AFEC4(int param_1,int param_2,int param_3);
extern int func_004356B4(int *param_1);
extern int func_004F87F8(int param_1,int param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_002a82ec;
extern undefined4 *DAT_002a8b6c;
extern int DAT_002a8b70;
extern int *DAT_002a8b74;
extern char s_cState_Die_002a8b50[];
extern char s_cState_ReactionWait_002a8b3c[];
extern char s_wrist_l_002a8b64[];
extern char s_wrist_r_002a8b5c[];

// USA 002A87FC <- EU 002A87D8 (Ghidra, non-matching)
// GLOBAL DAT_002a82ec undefined4
// GLOBAL DAT_002a8b6c undefined4 *
// GLOBAL DAT_002a8b70 int
// GLOBAL DAT_002a8b74 int *
// GLOBAL s_cState_Die_002a8b50 string
// GLOBAL s_cState_ReactionWait_002a8b3c string
// GLOBAL s_wrist_l_002a8b64 string
// GLOBAL s_wrist_r_002a8b5c string

int func_002A87FC(void)

{
  _Alignas(8) unsigned char albw_frame[0x50]; /* entry_sp - 0x0 .. entry_sp + 0x50 */
#define stack0x0000000c (*(undefined4 *)(albw_frame + 0xc))
#define stack0x00000010 (*(undefined4 *)(albw_frame + 0x10))
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  int unaff_r4;
  undefined4 uVar9;
  int *piVar10;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int *unaff_r10;
  undefined1 unaff_r11;
  undefined4 uVar11;
  undefined8 in_d8;
  #define in_stack_0000000c (*(uint *)(albw_frame + 0xc)) /* V4: frame slot (callee-filled) */
  char *pcStack00000014;
  int in_stack_00000070;
  
  iVar1 = *(int *)(unaff_r4 + 0xa00);
  *(int *)(iVar1 + 0x80) = (int)in_d8;
  *(int *)(iVar1 + 0x84) = (int)((ulonglong)in_d8 >> 0x20);
  pcStack00000014 = s_cState_ReactionWait_002a8b3c;
  func_0010BEC4(unaff_r4 + 0x9e0,0x11,(int *)&stack0x00000010);
  iVar1 = *(int *)(unaff_r4 + 0x9f8);
  uVar2 = *(undefined4 *)(unaff_r7 + 0x58);
  uVar9 = *(undefined4 *)(unaff_r7 + 0x5c);
  uVar11 = *(undefined4 *)(unaff_r7 + 0x60);
  *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(unaff_r7 + 0x54);
  *(undefined4 *)(iVar1 + 0x8c) = uVar2;
  iVar1 = *(int *)(unaff_r4 + 0x9fc);
  *(undefined4 *)(iVar1 + 0x88) = uVar9;
  *(undefined4 *)(iVar1 + 0x8c) = uVar11;
  iVar1 = *(int *)(unaff_r4 + 0xa00);
  *(int *)(iVar1 + 0x88) = (int)in_d8;
  *(int *)(iVar1 + 0x8c) = (int)((ulonglong)in_d8 >> 0x20);
  pcStack00000014 = s_cState_Die_002a8b50;
  func_0010BEC4(unaff_r4 + 0x9e0,0x12,(int *)&stack0x00000010);
  iVar1 = *(int *)(unaff_r4 + 0x9f8);
  uVar9 = *(undefined4 *)(unaff_r7 + 0x68);
  uVar11 = *(undefined4 *)(unaff_r7 + 0x6c);
  uVar2 = *(undefined4 *)(unaff_r7 + 0x70);
  *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(unaff_r7 + 100);
  *(undefined4 *)(iVar1 + 0x94) = uVar9;
  iVar1 = *(int *)(unaff_r4 + 0x9fc);
  *(undefined4 *)(iVar1 + 0x90) = uVar11;
  *(undefined4 *)(iVar1 + 0x94) = uVar2;
  iVar1 = *(int *)(unaff_r4 + 0xa00);
  *(int *)(iVar1 + 0x90) = (int)in_d8;
  *(int *)(iVar1 + 0x94) = (int)((ulonglong)in_d8 >> 0x20);
  *(uint *)(unaff_r4 + 0x59c) = *(uint *)(unaff_r4 + 0x59c) & 0xfff7ffdf | 0x860000;
  *(undefined1 *)(unaff_r4 + 0x895) = 5;
  func_002AFEC4(unaff_r4,-1,-1);
  *(uint *)(*(int *)(unaff_r4 + 0x424) + 0x2c) =
       *(uint *)(*(int *)(unaff_r4 + 0x424) + 0x2c) | 0x100000;
  *(undefined4 *)(unaff_r4 + 0x4f8) = *(undefined4 *)(in_stack_0000000c + 0x334);
  *(undefined2 *)(*(int *)(unaff_r4 + 0xa24) + 0x28) = 0xa0;
  pcStack00000014 = s_wrist_r_002a8b5c;
  uVar3 = func_00564A78(*(int *)(unaff_r4 + 0x40c),(int *)&stack0x00000010);
  *(uint *)(unaff_r4 + 0xb40) = uVar3;
  pcStack00000014 = s_wrist_l_002a8b64;
  uVar3 = func_00564A78(*unaff_r10,(int *)&stack0x00000010);
  *(uint *)(unaff_r4 + 0xb44) = uVar3;
  piVar10 = *(int **)(unaff_r4 + 0xaf8);
  piVar10[1] = *(int *)(unaff_r4 + 0xa6c);
  piVar10[2] = *(int *)(unaff_r4 + 0xa70);
  piVar10[3] = *(int *)(unaff_r4 + 0xa74);
  func_004356B4(piVar10);
  puVar4 = (undefined4 *)func_0010BAB4(0x10);
  puVar6 = DAT_002a8b6c;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = unaff_r8;
    uVar2 = *puVar6;
    uVar9 = puVar6[1];
    *puVar4 = unaff_r9;
    puVar4[2] = uVar2;
    puVar4[3] = uVar9;
  }
  *(undefined4 **)(unaff_r4 + 0xa40) = puVar4;
  *(int **)(unaff_r4 + 0xa28) = piVar10;
  *(undefined2 *)(piVar10 + 10) = 0xa0;
  in_stack_0000000c = *(uint *)(unaff_r4 + 0x2cc);
  func_0014EB8C(*(int *)(unaff_r4 + 0xafc),*(undefined4 *)(unaff_r4 + 0xaf8),
                *(undefined2 **)(unaff_r4 + 0xbf4),&stack0x0000000c,*(undefined2 *)(unaff_r4 + 0x54)
                ,unaff_r8,(short)DAT_002a82ec);
  iVar1 = DAT_002a8b70;
  *(char *)(*(int *)(unaff_r4 + 0xafc) + 0x61) = (char)unaff_r8;
  iVar5 = *(int *)(unaff_r4 + 0xa40);
  uVar2 = *(undefined4 *)(iVar1 + 0x174);
  uVar9 = *(undefined4 *)(iVar1 + 0x178);
  *(int *)(iVar5 + 4) = unaff_r4;
  *(undefined4 *)(iVar5 + 8) = uVar2;
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  func_002A6B54(unaff_r4);
  func_004F87F8(unaff_r4,1);
  *(undefined1 *)(unaff_r4 + 0x848) = unaff_r11;
  *(uint *)(unaff_r4 + 0x59c) = *(uint *)(unaff_r4 + 0x59c) & 0xfff7ffff;
  if (*(char *)(unaff_r4 + 0xb99) == '\0') {
    func_00662128((undefined4 *)(unaff_r4 + 0x9e0),1);
  }
  else {
    func_00662128((undefined4 *)(unaff_r4 + 0x9e0),0);
  }
  puVar6 = (undefined4 *)(unaff_r4 + 0x3d0);
  *(undefined4 *)(unaff_r4 + 0xa9c) = *puVar6;
  *(undefined4 *)(unaff_r4 + 0xaa0) = *(undefined4 *)(unaff_r4 + 0x3d4);
  *(undefined4 *)(unaff_r4 + 0xaa4) = *(undefined4 *)(unaff_r4 + 0x3d8);
  *(undefined4 *)(unaff_r4 + 0xaa8) = *puVar6;
  *(undefined4 *)(unaff_r4 + 0xaac) = *(undefined4 *)(unaff_r4 + 0x3d4);
  *(undefined4 *)(unaff_r4 + 0xab0) = *(undefined4 *)(unaff_r4 + 0x3d8);
  *(undefined4 *)(unaff_r4 + 0xab4) = *puVar6;
  *(undefined4 *)(unaff_r4 + 0xab8) = *(undefined4 *)(unaff_r4 + 0x3d4);
  *(undefined4 *)(unaff_r4 + 0xabc) = *(undefined4 *)(unaff_r4 + 0x3d8);
  *(undefined4 *)(unaff_r4 + 0xac0) = *puVar6;
  *(undefined4 *)(unaff_r4 + 0xac4) = *(undefined4 *)(unaff_r4 + 0x3d4);
  *(undefined4 *)(unaff_r4 + 0xac8) = *(undefined4 *)(unaff_r4 + 0x3d8);
  *(undefined4 *)(unaff_r4 + 0xad4) = *(undefined4 *)(unaff_r4 + 0x3d8);
  *(undefined4 *)(unaff_r4 + 0xacc) = *puVar6;
  *(undefined4 *)(unaff_r4 + 0xad0) = *(undefined4 *)(unaff_r4 + 0x3d4);
  uVar3 = *(uint *)(in_stack_00000070 + 0x29c);
  *(uint *)(unaff_r4 + 0xb4c) = uVar3;
  if (-1 < (int)uVar3) {
    iVar1 = *DAT_002a8b74;
    iVar5 = func_00581B9C(iVar1);
    if (((iVar5 == 1) && (puVar7 = (uint *)func_00582250(iVar1), uVar3 < *puVar7)) &&
       (iVar1 = *(int *)(puVar7[2] + uVar3 * 4), iVar1 != 0)) {
      uVar3 = 0;
      do {
        if (((*(int *)(iVar1 + 0x28) != 0) && (uVar3 < *(uint *)(iVar1 + 0x20))) &&
           (iVar5 = *(int *)(*(int *)(iVar1 + 0x28) + uVar3 * 4), iVar5 != 0)) {
          uVar9 = *(undefined4 *)(iVar5 + 0x1c);
          iVar8 = unaff_r4 + uVar3 * 0xc;
          uVar2 = *(undefined4 *)(iVar5 + 0x20);
          *(undefined4 *)(iVar8 + 0xa9c) = *(undefined4 *)(iVar5 + 0x18);
          *(undefined4 *)(iVar8 + 0xaa0) = uVar9;
          *(undefined4 *)(iVar8 + 0xaa4) = uVar2;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 5);
    }
  }
  return unaff_r4;
}

