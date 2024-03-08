extern "C" {
	cv::Ptr<cv::dnn_superres::DnnSuperResImpl>* cv_PtrOfDnnSuperResImpl_new(cv::dnn_superres::DnnSuperResImpl* val) {
			cv::Ptr<cv::dnn_superres::DnnSuperResImpl> ret = cv::Ptr<cv::dnn_superres::DnnSuperResImpl>(val);
			return new cv::Ptr<cv::dnn_superres::DnnSuperResImpl>(ret);
	}
	
	void cv_PtrOfDnnSuperResImpl_delete(cv::Ptr<cv::dnn_superres::DnnSuperResImpl>* instance) {
			delete instance;
	}
	
	const cv::dnn_superres::DnnSuperResImpl* cv_PtrOfDnnSuperResImpl_get_inner_ptr(const cv::Ptr<cv::dnn_superres::DnnSuperResImpl>* instance) {
		return instance->get();
	}

	cv::dnn_superres::DnnSuperResImpl* cv_PtrOfDnnSuperResImpl_get_inner_ptr_mut(cv::Ptr<cv::dnn_superres::DnnSuperResImpl>* instance) {
		return instance->get();
	}
}

