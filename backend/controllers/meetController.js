import asyncHandler from "express-async-handler";
import User from "../models/userModel.js";
import generateToken from "../utils/generateToken.js";

const createMeeting = asyncHandler(async (req, res) => {
  // Create meeting api
});

const joinMeeting = asyncHandler(async (req, res) => {
  // Join meeting api
});

export { createMeeting, joinMeeting };
