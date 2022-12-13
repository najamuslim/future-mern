import express from "express";
import * as meetController from "../controllers/userController.js";

const router = express.Router();

router.post("/meet/create", meetController.createMeeting);
router.post("/meet/join", meetController.joinMeeting);

export default router;
