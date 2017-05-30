PyObject * Kafka_generic_get_metadata(
                Handle *self,
                PyObject *args,
                PyObject *kwargs);


PyDoc_STRVAR(Kafka_generic_get_metadata_doc,
".. py:function:: get_metadata([all_topics=True], [topic=None], [timeout=-1])\n"
"\n"
" Request Metadata from broker.\n"
" :param bool all_topics: If True => request info about all topics in the cluster."
"Otherwise request info about locally known topics.\n"
" :param str topic: Only request info about this topc (Only used if all_topics=False). \n"
" :param float timeout: Maximum response time before failing. \n"
" :rtype: dict \n"
" :raises: KafkaException \n");
