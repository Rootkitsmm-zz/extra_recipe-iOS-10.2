//
//  offsets.h
//  extra_recipe
//
//  Created by Vasily Erfurt on 30/01/2017.
//  Copyright © 2017 Ian Beer. All rights reserved.
//

#ifndef offsets_h
#define offsets_h

void load_offsets();

extern uint64_t off1;
extern uint64_t off2;//OSData::getMetaClass
extern uint64_t off3;//OSSerializer::serialize
extern uint64_t off4;//RET
extern uint64_t off5;//uuid_copy

#endif /* offsets_h */
