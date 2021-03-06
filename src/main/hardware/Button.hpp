#pragma once

#include <observer/Observable.hpp>

#include <string>

namespace mpc {

	class Mpc;

	namespace controls {
		class BaseControls;
	}

	namespace hardware {

		class Button
			: public moduru::observer::Observable
		{

		private:
			mpc::Mpc* mpc;
			std::string label{ "" };
			std::weak_ptr<mpc::controls::BaseControls> controls;

		public:
			std::string getLabel();
			void push();
			void release();

		public:
			Button(mpc::Mpc* mpc, std::string label);
			~Button();

		};

	}
}
