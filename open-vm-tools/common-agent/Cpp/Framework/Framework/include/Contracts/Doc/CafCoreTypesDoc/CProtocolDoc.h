/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppDoc". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef CProtocolDoc_h_
#define CProtocolDoc_h_

namespace Caf {

/// A simple container for objects of Protocol
class CProtocolDoc {
public:
	CProtocolDoc() :
		_sequenceNumber(0),
		_isInitialized(false) {}
	virtual ~CProtocolDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::string uri,
		const std::string name = std::string(),
		const int32 sequenceNumber = 0) {
		if (! _isInitialized) {
			_name = name;
			_uri = uri;
			_sequenceNumber = sequenceNumber;

			_isInitialized = true;
		}
	}

public:
	/// Accessor for the Uri
	std::string getUri() const {
		return _uri;
	}

	/// Accessor for the Name
	std::string getName() const {
		return _name;
	}

	/// Accessor for the Value
	int32 getSequenceNumber() const {
		return _sequenceNumber;
	}

private:
	int32 _sequenceNumber;
	bool _isInitialized;

	std::string _uri;
	std::string _name;

private:
	CAF_CM_DECLARE_NOCOPY(CProtocolDoc);
};

CAF_DECLARE_SMART_POINTER(CProtocolDoc);

}

#endif