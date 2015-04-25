
#include "bt_sequence_node.h"


bool BTSequenceNode::get_result() {
	bool result = true;

	for ( int i = 0; i < nodes.size(); i++ ) {
		if ( nodes[i]->process_logic() == false ) {
			result = false;
			break;
		}
	}

	return result;
}
