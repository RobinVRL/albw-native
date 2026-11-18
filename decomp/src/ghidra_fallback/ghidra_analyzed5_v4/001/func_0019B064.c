#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001E2444(int param_1,int *param_2,int param_3,undefined4 param_4);
extern int func_002E0150(uint param_1);
extern int func_002E0168(uint param_1);
extern int func_002E01AC(uint param_1);
extern int func_00504D48(int param_1,int param_2);
extern undefined DAT_0019b38c;
extern int DAT_0019b390;
extern undefined4 DAT_0019b394;
extern int DAT_0019b3a0;
extern undefined1 DAT_0019b3a4;
extern undefined1 DAT_0019b3ac;
extern int *DAT_0019b4cc;
extern int *DAT_0019b4d0;
extern char s_World_0019b398[];

// USA 0019B064 <- EU 0019B064 (Ghidra, non-matching)
// GLOBAL DAT_0019b38c undefined
// GLOBAL DAT_0019b390 int
// GLOBAL DAT_0019b394 undefined4
// GLOBAL DAT_0019b3a0 int
// GLOBAL DAT_0019b3a4 undefined1
// GLOBAL DAT_0019b3ac undefined1
// GLOBAL DAT_0019b4cc int *
// GLOBAL DAT_0019b4d0 int *
// GLOBAL s_World_0019b398 string

void func_0019B064(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 in_r3;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  _Alignas(8) unsigned char albw_frame[0x1c0];
  #define local_1b8 (*(int *)(albw_frame + 0x8))
  #define local_1b4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_1b0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_1a8 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_1a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_1a0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_19c (*(undefined4 *)(albw_frame + 0x24))
  #define local_198 (*(undefined4 *)(albw_frame + 0x28))
  #define local_194 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_190 (*(undefined4 *)(albw_frame + 0x30))
  #define iStack_18c (*(int *)(albw_frame + 0x34))
  #define local_188 (*(char * *)(albw_frame + 0x38))
  #define local_184 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_183 (*(char *)(albw_frame + 0x3d))
  #define local_182 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_181 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_180 (*(undefined1 *)(albw_frame + 0x40))
  #define local_17c (*(int *)(albw_frame + 0x44))
  #define local_178 (*(uint * *)(albw_frame + 0x48))
  #define local_174 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_170 (*(int * *)(albw_frame + 0x50))
  #define local_16c (*(undefined1 *)(albw_frame + 0x54))
  #define local_168 (*(int *)(albw_frame + 0x58))
  #define local_164 (*(uint * *)(albw_frame + 0x5c))
  #define local_160 (*(int *)(albw_frame + 0x60))
  #define local_15c ((undefined1 *)(albw_frame + 0x64))
  #define uStack_5d (*(undefined1 *)(albw_frame + 0x163))
  #define local_58 (*(uint * *)(albw_frame + 0x168))
  #define local_50 (*(int *)(albw_frame + 0x170))
  #define local_4c (*(uint * *)(albw_frame + 0x174))
  #define local_44 (*(uint * *)(albw_frame + 0x17c))
  #define local_40 (*(uint * *)(albw_frame + 0x180))
  #define local_3c (*(int *)(albw_frame + 0x184))
  #define local_34 (*(uint *)(albw_frame + 0x18c))
  #define local_30 (*(uint * *)(albw_frame + 0x190))
  piVar4 = (int *)func_002E0150(*(uint *)(param_1 + 8));
  if (piVar4 != (int *)0x0) {
    bVar3 = func_002E01AC(*(uint *)(param_1 + 8));
    iVar1 = DAT_0019b390;
    local_34 = (uint)bVar3;
    if (local_34 != 0) {
      local_1b4 = DAT_0019b394;
      local_1b0 = 0;
      local_1b8 = DAT_0019b390;
      local_1ac = 0;
      local_1a8 = 0x20;
      uStack_1a4 = 0;
      local_19c = 0;
      local_188 = s_World_0019b398;
      local_1a0 = 0;
      local_198 = 0;
      local_194 = 0;
      uStack_190 = 0;
      iStack_18c = DAT_0019b390;
      local_184 = 7;
      local_183 = '\x04';
      local_178 = (uint *)&DAT_0019b38c;
      local_182 = 0;
      local_180 = 0;
      local_181 = 0;
      local_16c = 1;
      local_164 = (uint *)local_15c;
      local_174 = 0;
      local_17c = DAT_0019b390;
      local_170 = (int *)0x0;
      local_160 = 0x100;
      uStack_5d = 0;
      local_15c[0] = 0;
      local_168 = DAT_0019b3a0;
      iVar5 = func_002E0168(*(uint *)(param_1 + 8));
      if (iVar5 == 0) {
        local_183 = '\x02';
      }
      else if (iVar5 == 1) {
        local_183 = '\x04';
      }
      if (param_2 != 0) {
        local_183 = -1;
      }
      uVar7 = 0;
      local_181 = 0;
      local_174 = param_3;
      if (local_34 != 0) {
        do {
          puVar2 = local_164;
          piVar9 = (int *)(param_1 + 0x1c8 + uVar7 * 4);
          if (*piVar9 == 0) {
            local_4c = (uint *)&DAT_0019b3a4;
            local_50 = iVar1;
            (**(code **)(iVar1 + 8))(&local_50);
            uVar8 = 0;
            do {
              if (*(char *)((int)local_4c + uVar8) == '\0') {
                if ((int)uVar8 < 0x40001) goto LAB_0019b1e4;
                break;
              }
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < 0x40001);
            uVar8 = 0;
LAB_0019b1e4:
            if (local_160 <= (int)uVar8) {
              uVar8 = local_160 - 1;
            }
            (**(code **)(local_50 + 8))(&local_50);
            func_0010E3C4(puVar2,local_4c,uVar8);
            *(undefined1 *)((int)puVar2 + uVar8) = 0;
            (**(code **)(*piVar4 + 8))(piVar4);
            local_4c = (uint *)piVar4[1];
            local_50 = iVar1;
            local_58 = local_164;
            (**(code **)(local_168 + 8))(&local_168);
            local_3c = 0;
            do {
              if (*(char *)((int)local_164 + local_3c) == '\0') {
                if (local_3c < 0x40001) goto LAB_0019b288;
                break;
              }
              local_3c = local_3c + 1;
            } while (local_3c < 0x40001);
            local_3c = 0;
LAB_0019b288:
            iVar5 = local_3c;
            if (local_3c < 0) {
              iVar5 = 0;
            }
            (**(code **)(local_50 + 8))(&local_50);
            uVar8 = 0;
            do {
              if (*(char *)((int)local_4c + uVar8) == '\0') {
                if ((int)uVar8 < 0x40001) goto LAB_0019b2dc;
                break;
              }
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < 0x40001);
            uVar8 = 0;
LAB_0019b2dc:
            if (local_160 - iVar5 <= (int)uVar8) {
              uVar8 = (local_160 - iVar5) - 1;
            }
            if (0 < (int)uVar8) {
              local_30 = (uint *)((int)local_58 + iVar5);
              (**(code **)(local_50 + 8))(&local_50);
              func_0010E3C4(local_30,local_4c,uVar8);
              if (local_3c < (int)(iVar5 + uVar8)) {
                *(undefined1 *)((int)local_58 + iVar5 + uVar8) = 0;
              }
            }
            local_4c = (uint *)&DAT_0019b3ac;
            local_50 = iVar1;
            local_40 = local_164;
            (**(code **)(local_168 + 8))(&local_168);
            local_3c = 0;
            do {
              if (*(char *)((int)local_164 + local_3c) == '\0') {
                if (local_3c < 0x40001) goto LAB_0019b3c0;
                break;
              }
              local_3c = local_3c + 1;
            } while (local_3c < 0x40001);
            local_3c = 0;
LAB_0019b3c0:
            iVar5 = local_3c;
            if (local_3c < 0) {
              iVar5 = 0;
            }
            (**(code **)(local_50 + 8))(&local_50);
            uVar8 = 0;
            do {
              if (*(char *)((int)local_4c + uVar8) == '\0') {
                if ((int)uVar8 < 0x40001) goto LAB_0019b414;
                break;
              }
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < 0x40001);
            uVar8 = 0;
LAB_0019b414:
            if (local_160 - iVar5 <= (int)uVar8) {
              uVar8 = (local_160 - iVar5) - 1;
            }
            if (0 < (int)uVar8) {
              local_44 = (uint *)((int)local_40 + iVar5);
              (**(code **)(local_50 + 8))(&local_50);
              func_0010E3C4(local_44,local_4c,uVar8);
              if (local_3c < (int)(iVar5 + uVar8)) {
                *(undefined1 *)((int)local_40 + iVar5 + uVar8) = 0;
              }
            }
            local_178 = local_164;
            if (local_183 != -1) {
              local_170 = func_001E2444(*DAT_0019b4cc,&local_168,(int)local_183,in_r3);
            }
            puVar6 = func_00504D48(*DAT_0019b4d0,(int)&local_1b8);
            *piVar9 = (int)puVar6;
          }
          uVar7 = uVar7 + 1;
          piVar4 = piVar4 + 2;
        } while (uVar7 < local_34);
      }
    }
  }
  return;
}

