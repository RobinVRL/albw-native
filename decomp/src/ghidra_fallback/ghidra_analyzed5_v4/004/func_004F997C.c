#include "ghidra_types.h"

extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int DAT_004f99d4;
extern char s_SE_EN_REFLECT_HAMMER_004f99d8[];
extern char s_SE_EN_REFLECT_NET_004f99f0[];
extern char s_SE_EN_REFLECT_SWORD_004f99c0[];

// USA 004F997C <- EU 004F9954 (Ghidra, non-matching)
// GLOBAL DAT_004f99d4 int
// GLOBAL s_SE_EN_REFLECT_HAMMER_004f99d8 string
// GLOBAL s_SE_EN_REFLECT_NET_004f99f0 string
// GLOBAL s_SE_EN_REFLECT_SWORD_004f99c0 string

undefined4 func_004F997C(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_004f99d4;
  local_14 = s_SE_EN_REFLECT_SWORD_004f99c0;
  local_18 = DAT_004f99d4;
  func_001509A4(param_1,&local_18,0);
  local_14 = s_SE_EN_REFLECT_HAMMER_004f99d8;
  local_18 = iVar1;
  func_001509A4(param_1,&local_18,0);
  local_14 = s_SE_EN_REFLECT_NET_004f99f0;
  local_18 = iVar1;
  return func_001509A4(param_1,&local_18,0);
}

