#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_004BB144(int param_1);
extern int func_004BB59C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004BB708(int param_1);
extern int func_004BB8E4(int param_1);
extern int func_004CEAF0(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern int *DAT_004bc23c;
extern undefined4 DAT_004bc240;
extern undefined4 DAT_004bc244;
extern undefined4 DAT_004bc248;
extern int DAT_004bc260;
extern char s_SE_Raft_PLAYER_ON_004bc24c[];

// USA 004BC158 <- EU 004BC130 (Ghidra, non-matching)
// GLOBAL DAT_004bc23c int *
// GLOBAL DAT_004bc240 undefined4
// GLOBAL DAT_004bc244 undefined4
// GLOBAL DAT_004bc248 undefined4
// GLOBAL DAT_004bc260 int
// GLOBAL s_SE_Raft_PLAYER_ON_004bc24c string

void func_004BC158(int *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 extraout_r1;
  undefined4 in_r2;
  int *in_r3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define puStack_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  cVar1 = *(char *)((int)param_1 + 0x44a);
  if (((cVar1 != *(char *)((int)param_1 + 1099)) &&
      (*(char *)((int)param_1 + 1099) = cVar1, cVar1 == '\x01')) &&
     (bVar2 = func_00556EAC(*DAT_004bc23c,0x4e), !bVar2)) {
    puStack_70 = &local_6c;
    local_78[1] = 3;
    local_20 = 0;
    local_24 = 10;
    local_78[0] = 1;
    local_6c = 1;
    local_68 = DAT_004bc244;
    local_64 = DAT_004bc240;
    local_60 = DAT_004bc248;
    local_58 = (uint)in_r3 | 0xff;
    local_5c = DAT_004bc240;
    func_0016898C(param_1[0x110],local_78);
    local_14 = s_SE_Raft_PLAYER_ON_004bc24c;
    local_18 = DAT_004bc260;
    in_r2 = 0;
    func_00150A84(param_1,&local_18,0);
    *(undefined1 *)((int)param_1 + 0x44d) = 1;
  }
  func_004BB708((int)param_1);
  func_004BB8E4((int)param_1);
  func_004BB59C((int)param_1,extraout_r1,in_r2,in_r3);
  func_004CEAF0(param_1[0x10f]);
  func_004BB144((int)param_1);
  *(undefined1 *)((int)param_1 + 0x44a) = 0;
  return;
}

